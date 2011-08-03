/**
 * @file /src/takeoff/takeoff_widget/Launcher.cpp
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
 * @class  Takeoff::Launcher
 */
#include "Launcher.h"
#include <QtGui/QGraphicsLinearLayout>
#include <KDE/KRun>
#include <KDE/Plasma/IconWidget>
#include <KDE/Plasma/Label>
using namespace Takeoff;

// ************************************************************************** //
// **********              CONSTRUCTORS AND DESTRUCTOR             ********** //
// ************************************************************************** //

Launcher::Launcher(const QIcon &icon, const QString &name,
        const QString &desktopFile)
        : QGraphicsWidget(), //Plasma::IconWidget(icon, name),
          desktopFile(desktopFile)
{
    // Icon
    Plasma::IconWidget *iconWidget = new Plasma::IconWidget(icon, "", this);
    connect(iconWidget, SIGNAL(clicked()), this, SLOT(runApplication()));
    connect(iconWidget, SIGNAL(clicked()), this, SIGNAL(clicked()));

    // Label with the text, is necessary to add a Plasma::Label to show the
    // complete text
    Plasma::Label *text = new Plasma::Label(this);
    text->setText(name);
    text->setAlignment(Qt::AlignCenter);

    QGraphicsLinearLayout *l = new QGraphicsLinearLayout(this);
    l->setOrientation(Qt::Vertical);
    l->addItem(iconWidget);
    l->addItem(text);
    this->setLayout(l);
}


// ************************************************************************** //
// **********                    PRIVATE SLOTS                     ********** //
// ************************************************************************** //

void Launcher::runApplication() const
{
    new KRun(KUrl(this->desktopFile), NULL);
}
