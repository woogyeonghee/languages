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
CMAKE_SOURCE_DIR = /home/test/c_scr/cpp/acpp/wordCount2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/wordCount2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/wordCount2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wordCount2.dir/flags.make

CMakeFiles/wordCount2.dir/main.cpp.o: CMakeFiles/wordCount2.dir/flags.make
CMakeFiles/wordCount2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wordCount2.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wordCount2.dir/main.cpp.o -c /home/test/c_scr/cpp/acpp/wordCount2/main.cpp

CMakeFiles/wordCount2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wordCount2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/c_scr/cpp/acpp/wordCount2/main.cpp > CMakeFiles/wordCount2.dir/main.cpp.i

CMakeFiles/wordCount2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wordCount2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/c_scr/cpp/acpp/wordCount2/main.cpp -o CMakeFiles/wordCount2.dir/main.cpp.s

# Object files for target wordCount2
wordCount2_OBJECTS = \
"CMakeFiles/wordCount2.dir/main.cpp.o"

# External object files for target wordCount2
wordCount2_EXTERNAL_OBJECTS =

wordCount2: CMakeFiles/wordCount2.dir/main.cpp.o
wordCount2: CMakeFiles/wordCount2.dir/build.make
wordCount2: CMakeFiles/wordCount2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable wordCount2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wordCount2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wordCount2.dir/build: wordCount2
.PHONY : CMakeFiles/wordCount2.dir/build

CMakeFiles/wordCount2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wordCount2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wordCount2.dir/clean

CMakeFiles/wordCount2.dir/depend:
	cd /home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test/c_scr/cpp/acpp/wordCount2 /home/test/c_scr/cpp/acpp/wordCount2 /home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug /home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug /home/test/c_scr/cpp/acpp/wordCount2/cmake-build-debug/CMakeFiles/wordCount2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wordCount2.dir/depend

