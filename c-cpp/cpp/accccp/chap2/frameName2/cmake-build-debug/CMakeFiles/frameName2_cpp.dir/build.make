# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/164/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/164/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/test/c_scr/cpp/accccp/frameName2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/frameName2_cpp.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/frameName2_cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/frameName2_cpp.dir/flags.make

CMakeFiles/frameName2_cpp.dir/main.cpp.o: CMakeFiles/frameName2_cpp.dir/flags.make
CMakeFiles/frameName2_cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/frameName2_cpp.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/frameName2_cpp.dir/main.cpp.o -c /home/test/c_scr/cpp/accccp/frameName2/main.cpp

CMakeFiles/frameName2_cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/frameName2_cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/c_scr/cpp/accccp/frameName2/main.cpp > CMakeFiles/frameName2_cpp.dir/main.cpp.i

CMakeFiles/frameName2_cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/frameName2_cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/c_scr/cpp/accccp/frameName2/main.cpp -o CMakeFiles/frameName2_cpp.dir/main.cpp.s

# Object files for target frameName2_cpp
frameName2_cpp_OBJECTS = \
"CMakeFiles/frameName2_cpp.dir/main.cpp.o"

# External object files for target frameName2_cpp
frameName2_cpp_EXTERNAL_OBJECTS =

frameName2_cpp: CMakeFiles/frameName2_cpp.dir/main.cpp.o
frameName2_cpp: CMakeFiles/frameName2_cpp.dir/build.make
frameName2_cpp: CMakeFiles/frameName2_cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable frameName2_cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/frameName2_cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/frameName2_cpp.dir/build: frameName2_cpp
.PHONY : CMakeFiles/frameName2_cpp.dir/build

CMakeFiles/frameName2_cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/frameName2_cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/frameName2_cpp.dir/clean

CMakeFiles/frameName2_cpp.dir/depend:
	cd /home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test/c_scr/cpp/accccp/frameName2 /home/test/c_scr/cpp/accccp/frameName2 /home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug /home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug /home/test/c_scr/cpp/accccp/frameName2/cmake-build-debug/CMakeFiles/frameName2_cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/frameName2_cpp.dir/depend

