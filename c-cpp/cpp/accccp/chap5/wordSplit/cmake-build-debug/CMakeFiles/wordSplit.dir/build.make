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
CMAKE_SOURCE_DIR = /home/test/c_scr/cpp/accccp/chap5/wordSplit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/wordSplit.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/wordSplit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wordSplit.dir/flags.make

CMakeFiles/wordSplit.dir/main.cpp.o: CMakeFiles/wordSplit.dir/flags.make
CMakeFiles/wordSplit.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/wordSplit.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/wordSplit.dir/main.cpp.o -c /home/test/c_scr/cpp/accccp/chap5/wordSplit/main.cpp

CMakeFiles/wordSplit.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wordSplit.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/c_scr/cpp/accccp/chap5/wordSplit/main.cpp > CMakeFiles/wordSplit.dir/main.cpp.i

CMakeFiles/wordSplit.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wordSplit.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/c_scr/cpp/accccp/chap5/wordSplit/main.cpp -o CMakeFiles/wordSplit.dir/main.cpp.s

# Object files for target wordSplit
wordSplit_OBJECTS = \
"CMakeFiles/wordSplit.dir/main.cpp.o"

# External object files for target wordSplit
wordSplit_EXTERNAL_OBJECTS =

wordSplit: CMakeFiles/wordSplit.dir/main.cpp.o
wordSplit: CMakeFiles/wordSplit.dir/build.make
wordSplit: CMakeFiles/wordSplit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable wordSplit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wordSplit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wordSplit.dir/build: wordSplit
.PHONY : CMakeFiles/wordSplit.dir/build

CMakeFiles/wordSplit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wordSplit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wordSplit.dir/clean

CMakeFiles/wordSplit.dir/depend:
	cd /home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test/c_scr/cpp/accccp/chap5/wordSplit /home/test/c_scr/cpp/accccp/chap5/wordSplit /home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug /home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug /home/test/c_scr/cpp/accccp/chap5/wordSplit/cmake-build-debug/CMakeFiles/wordSplit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wordSplit.dir/depend

