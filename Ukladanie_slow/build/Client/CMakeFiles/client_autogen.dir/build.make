# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/redhener/Desktop/Gra-ukladanie_slow-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/redhener/Desktop/Gra-ukladanie_slow-main/build

# Utility rule file for client_autogen.

# Include any custom commands dependencies for this target.
include Client/CMakeFiles/client_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include Client/CMakeFiles/client_autogen.dir/progress.make

Client/CMakeFiles/client_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/redhener/Desktop/Gra-ukladanie_slow-main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target client"
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Client && /usr/bin/cmake -E cmake_autogen /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Client/CMakeFiles/client_autogen.dir/AutogenInfo.json ""

client_autogen: Client/CMakeFiles/client_autogen
client_autogen: Client/CMakeFiles/client_autogen.dir/build.make
.PHONY : client_autogen

# Rule to build all files generated by this target.
Client/CMakeFiles/client_autogen.dir/build: client_autogen
.PHONY : Client/CMakeFiles/client_autogen.dir/build

Client/CMakeFiles/client_autogen.dir/clean:
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Client && $(CMAKE_COMMAND) -P CMakeFiles/client_autogen.dir/cmake_clean.cmake
.PHONY : Client/CMakeFiles/client_autogen.dir/clean

Client/CMakeFiles/client_autogen.dir/depend:
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/redhener/Desktop/Gra-ukladanie_slow-main /home/redhener/Desktop/Gra-ukladanie_slow-main/Client /home/redhener/Desktop/Gra-ukladanie_slow-main/build /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Client /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Client/CMakeFiles/client_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Client/CMakeFiles/client_autogen.dir/depend
