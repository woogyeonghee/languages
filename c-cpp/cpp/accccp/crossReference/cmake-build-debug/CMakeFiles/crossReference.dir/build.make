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
CMAKE_SOURCE_DIR = /home/test/accelerated/crossReference

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test/accelerated/crossReference/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/crossReference.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/crossReference.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/crossReference.dir/flags.make

CMakeFiles/crossReference.dir/main.cpp.o: CMakeFiles/crossReference.dir/flags.make
CMakeFiles/crossReference.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/accelerated/crossReference/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/crossReference.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/crossReference.dir/main.cpp.o -c /home/test/accelerated/crossReference/main.cpp

CMakeFiles/crossReference.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/crossReference.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/accelerated/crossReference/main.cpp > CMakeFiles/crossReference.dir/main.cpp.i

CMakeFiles/crossReference.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/crossReference.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/accelerated/crossReference/main.cpp -o CMakeFiles/crossReference.dir/main.cpp.s

# Object files for target crossReference
crossReference_OBJECTS = \
"CMakeFiles/crossReference.dir/main.cpp.o"

# External object files for target crossReference
crossReference_EXTERNAL_OBJECTS =

crossReference: CMakeFiles/crossReference.dir/main.cpp.o
crossReference: CMakeFiles/crossReference.dir/build.make
crossReference: CMakeFiles/crossReference.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/test/accelerated/crossReference/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable crossReference"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/crossReference.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/crossReference.dir/build: crossReference
.PHONY : CMakeFiles/crossReference.dir/build

CMakeFiles/crossReference.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/crossReference.dir/cmake_clean.cmake
.PHONY : CMakeFiles/crossReference.dir/clean

CMakeFiles/crossReference.dir/depend:
	cd /home/test/accelerated/crossReference/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test/accelerated/crossReference /home/test/accelerated/crossReference /home/test/accelerated/crossReference/cmake-build-debug /home/test/accelerated/crossReference/cmake-build-debug /home/test/accelerated/crossReference/cmake-build-debug/CMakeFiles/crossReference.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/crossReference.dir/depend

