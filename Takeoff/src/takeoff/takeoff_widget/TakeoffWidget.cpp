/**
 * @file /src/takeoff/takeoff_widget/TakeoffWidget.cpp
 *
 * This file is part of Takeoff.
 *
 * Takeoff is free software:  you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 3 of the License,  or (at your option)  any later
 * version.
 *
 * Takeoff is distributed in  the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Takeoff. If not, see <http://www.gnu.org/licenses/>.
 *
 * @author José Expósito <jose.exposito89@gmail.com> (C) 2011
 * @class  Takeoff::TakeoffWidget
 */
#include "TakeoffWidget.h"
#include <QtGui/QGraphicsLinearLayout>
#include <KDE/Plasma/TabBar>
#include "Launcher.h"
#include "menu/MenuWidget.h"
#include "search/SearchWidget.h"
using namespace Takeoff;
using namespace TakeoffPrivate;
using namespace Plasma;

// ************************************************************************** //
// **********              CONSTRUCTORS AND DESTRUCTOR             ********** //
// ************************************************************************** //

TakeoffWidget::TakeoffWidget(QGraphicsWidget *parent)
        : Applet(parent),
          tabBar(NULL),
          menuWidget(NULL),
          searchWidget(NULL)
{
    this->reset();
}


// ************************************************************************** //
// **********                    PUBLIC METHODS                    ********** //
// ************************************************************************** //

void TakeoffWidget::addMenuCategory(const QIcon &icon, const QString &title)
{
    this->menuWidget->addMenuCategory(icon, title);
}

void TakeoffWidget::addMenuLauncher(int tabIndex, Launcher *launcher)
{
    // Connect the launcher clicked signal with the TakeoffWidget clicked signal
    connect(launcher, SIGNAL(clicked()), this, SIGNAL(clicked()));

    this->menuWidget->addMenuLauncher(tabIndex, launcher);
}

void TakeoffWidget::reset()
{
    // Contruct widgets
    delete this->tabBar;
    this->tabBar       = new TabBar(this);
    this->menuWidget   = new MenuWidget(this->tabBar);
    this->searchWidget = new SearchWidget(this->tabBar);

    // Signals and slots
    connect(this->searchWidget, SIGNAL(exitSearch()),
            this, SLOT(exitSearch()));
    connect(this->searchWidget, SIGNAL(clicked()),
            this, SIGNAL(clicked()));

    // Never show the tabBar bar
    this->tabBar->setTabBarShown(false);

    // Set the categoriesBar at first tab
    this->tabBar->addTab("Menu area",   this->menuWidget);
    this->tabBar->addTab("Search area", this->searchWidget);

    // Add the widgets
    QGraphicsLinearLayout *l = new QGraphicsLinearLayout(this);
    l->addItem(this->tabBar);
    this->setLayout(l);
}

//------------------------------------------------------------------------------

void TakeoffWidget::keyPressEvent(QKeyEvent *event)
{
    // Show the search area
    if (this->tabBar->currentIndex() != 1) {
        this->searchWidget->clearSearchText();
        this->searchWidget->addSearchText(event);
        this->tabBar->setCurrentIndex(1);

    // Add text to the search box
    } else {
        this->searchWidget->addSearchText(event);
    }
}


// ************************************************************************** //
// **********                      GET/SET/IS                      ********** //
// ************************************************************************** //

int TakeoffWidget::getNumMenuCategories() const
{
    return this->menuWidget->getNumMenuCategories();
}

void TakeoffWidget::setFirstTab(bool changeMenuTab)
{
    this->tabBar->setCurrentIndex(0);

    if (changeMenuTab)
        this->menuWidget->setFirstCategory();
}


// ************************************************************************** //
// **********                    PRIVATE SLOTS                     ********** //
// ************************************************************************** //

void TakeoffWidget::exitSearch()
{
    this->tabBar->setCurrentIndex(0);
}
