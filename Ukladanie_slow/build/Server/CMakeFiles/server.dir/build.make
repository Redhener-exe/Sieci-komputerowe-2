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

# Include any dependencies generated for this target.
include Server/CMakeFiles/server.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Server/CMakeFiles/server.dir/compiler_depend.make

# Include the progress variables for this target.
include Server/CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include Server/CMakeFiles/server.dir/flags.make

Server/CMakeFiles/server.dir/server.cpp.o: Server/CMakeFiles/server.dir/flags.make
Server/CMakeFiles/server.dir/server.cpp.o: /home/redhener/Desktop/Gra-ukladanie_slow-main/Server/server.cpp
Server/CMakeFiles/server.dir/server.cpp.o: Server/CMakeFiles/server.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/redhener/Desktop/Gra-ukladanie_slow-main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Server/CMakeFiles/server.dir/server.cpp.o"
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Server/CMakeFiles/server.dir/server.cpp.o -MF CMakeFiles/server.dir/server.cpp.o.d -o CMakeFiles/server.dir/server.cpp.o -c /home/redhener/Desktop/Gra-ukladanie_slow-main/Server/server.cpp

Server/CMakeFiles/server.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/server.cpp.i"
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/redhener/Desktop/Gra-ukladanie_slow-main/Server/server.cpp > CMakeFiles/server.dir/server.cpp.i

Server/CMakeFiles/server.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/server.cpp.s"
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/redhener/Desktop/Gra-ukladanie_slow-main/Server/server.cpp -o CMakeFiles/server.dir/server.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/server.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

Server/server: Server/CMakeFiles/server.dir/server.cpp.o
Server/server: Server/CMakeFiles/server.dir/build.make
Server/server: Server/CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/redhener/Desktop/Gra-ukladanie_slow-main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable server"
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Server/CMakeFiles/server.dir/build: Server/server
.PHONY : Server/CMakeFiles/server.dir/build

Server/CMakeFiles/server.dir/clean:
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server && $(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : Server/CMakeFiles/server.dir/clean

Server/CMakeFiles/server.dir/depend:
	cd /home/redhener/Desktop/Gra-ukladanie_slow-main/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/redhener/Desktop/Gra-ukladanie_slow-main /home/redhener/Desktop/Gra-ukladanie_slow-main/Server /home/redhener/Desktop/Gra-ukladanie_slow-main/build /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server /home/redhener/Desktop/Gra-ukladanie_slow-main/build/Server/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Server/CMakeFiles/server.dir/depend

