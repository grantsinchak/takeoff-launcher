# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build

# Utility rule file for translations.

translations/CMakeFiles/translations: translations/pl.gmo
translations/CMakeFiles/translations: translations/ca.gmo
translations/CMakeFiles/translations: translations/es.gmo
translations/CMakeFiles/translations: translations/tr.gmo
translations/CMakeFiles/translations: translations/gl.gmo
translations/CMakeFiles/translations: translations/it.gmo
translations/CMakeFiles/translations: translations/ru.gmo
translations/CMakeFiles/translations: translations/el.gmo
translations/CMakeFiles/translations: translations/de.gmo

translations/pl.gmo: ../translations/pl.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Generating pl.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/pl.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/pl.po

translations/ca.gmo: ../translations/ca.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@echo "Generating ca.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/ca.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/ca.po

translations/es.gmo: ../translations/es.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@echo "Generating es.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/es.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/es.po

translations/tr.gmo: ../translations/tr.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@echo "Generating tr.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/tr.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/tr.po

translations/gl.gmo: ../translations/gl.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@echo "Generating gl.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/gl.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/gl.po

translations/it.gmo: ../translations/it.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@echo "Generating it.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/it.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/it.po

translations/ru.gmo: ../translations/ru.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@echo "Generating ru.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/ru.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/ru.po

translations/el.gmo: ../translations/el.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@echo "Generating el.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/el.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/el.po

translations/de.gmo: ../translations/de.po
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@echo "Generating de.gmo"
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && /usr/bin/msgfmt -o /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/de.gmo /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations/de.po

translations: translations/CMakeFiles/translations
translations: translations/pl.gmo
translations: translations/ca.gmo
translations: translations/es.gmo
translations: translations/tr.gmo
translations: translations/gl.gmo
translations: translations/it.gmo
translations: translations/ru.gmo
translations: translations/el.gmo
translations: translations/de.gmo
translations: translations/CMakeFiles/translations.dir/build.make
.PHONY : translations

# Rule to build all files generated by this target.
translations/CMakeFiles/translations.dir/build: translations
.PHONY : translations/CMakeFiles/translations.dir/build

translations/CMakeFiles/translations.dir/clean:
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations && $(CMAKE_COMMAND) -P CMakeFiles/translations.dir/cmake_clean.cmake
.PHONY : translations/CMakeFiles/translations.dir/clean

translations/CMakeFiles/translations.dir/depend:
	cd /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/translations /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations /home/jose/Programación/C++/Proyectos/Takeoff/Takeoff/build/translations/CMakeFiles/translations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : translations/CMakeFiles/translations.dir/depend

