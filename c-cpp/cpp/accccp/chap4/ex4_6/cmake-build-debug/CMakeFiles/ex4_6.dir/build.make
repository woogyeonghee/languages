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
CMAKE_SOURCE_DIR = /home/test/accelerated/ex4_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/test/accelerated/ex4_6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex4_6.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ex4_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex4_6.dir/flags.make

CMakeFiles/ex4_6.dir/main.cpp.o: CMakeFiles/ex4_6.dir/flags.make
CMakeFiles/ex4_6.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/accelerated/ex4_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex4_6.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4_6.dir/main.cpp.o -c /home/test/accelerated/ex4_6/main.cpp

CMakeFiles/ex4_6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4_6.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/accelerated/ex4_6/main.cpp > CMakeFiles/ex4_6.dir/main.cpp.i

CMakeFiles/ex4_6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4_6.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/accelerated/ex4_6/main.cpp -o CMakeFiles/ex4_6.dir/main.cpp.s

CMakeFiles/ex4_6.dir/grade.cpp.o: CMakeFiles/ex4_6.dir/flags.make
CMakeFiles/ex4_6.dir/grade.cpp.o: ../grade.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/accelerated/ex4_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex4_6.dir/grade.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4_6.dir/grade.cpp.o -c /home/test/accelerated/ex4_6/grade.cpp

CMakeFiles/ex4_6.dir/grade.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4_6.dir/grade.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/accelerated/ex4_6/grade.cpp > CMakeFiles/ex4_6.dir/grade.cpp.i

CMakeFiles/ex4_6.dir/grade.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4_6.dir/grade.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/accelerated/ex4_6/grade.cpp -o CMakeFiles/ex4_6.dir/grade.cpp.s

CMakeFiles/ex4_6.dir/median.cpp.o: CMakeFiles/ex4_6.dir/flags.make
CMakeFiles/ex4_6.dir/median.cpp.o: ../median.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/accelerated/ex4_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex4_6.dir/median.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4_6.dir/median.cpp.o -c /home/test/accelerated/ex4_6/median.cpp

CMakeFiles/ex4_6.dir/median.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4_6.dir/median.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/accelerated/ex4_6/median.cpp > CMakeFiles/ex4_6.dir/median.cpp.i

CMakeFiles/ex4_6.dir/median.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4_6.dir/median.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/accelerated/ex4_6/median.cpp -o CMakeFiles/ex4_6.dir/median.cpp.s

CMakeFiles/ex4_6.dir/student_info.cpp.o: CMakeFiles/ex4_6.dir/flags.make
CMakeFiles/ex4_6.dir/student_info.cpp.o: ../student_info.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/test/accelerated/ex4_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex4_6.dir/student_info.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4_6.dir/student_info.cpp.o -c /home/test/accelerated/ex4_6/student_info.cpp

CMakeFiles/ex4_6.dir/student_info.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4_6.dir/student_info.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/test/accelerated/ex4_6/student_info.cpp > CMakeFiles/ex4_6.dir/student_info.cpp.i

CMakeFiles/ex4_6.dir/student_info.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4_6.dir/student_info.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/test/accelerated/ex4_6/student_info.cpp -o CMakeFiles/ex4_6.dir/student_info.cpp.s

# Object files for target ex4_6
ex4_6_OBJECTS = \
"CMakeFiles/ex4_6.dir/main.cpp.o" \
"CMakeFiles/ex4_6.dir/grade.cpp.o" \
"CMakeFiles/ex4_6.dir/median.cpp.o" \
"CMakeFiles/ex4_6.dir/student_info.cpp.o"

# External object files for target ex4_6
ex4_6_EXTERNAL_OBJECTS =

ex4_6: CMakeFiles/ex4_6.dir/main.cpp.o
ex4_6: CMakeFiles/ex4_6.dir/grade.cpp.o
ex4_6: CMakeFiles/ex4_6.dir/median.cpp.o
ex4_6: CMakeFiles/ex4_6.dir/student_info.cpp.o
ex4_6: CMakeFiles/ex4_6.dir/build.make
ex4_6: CMakeFiles/ex4_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/test/accelerated/ex4_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ex4_6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex4_6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex4_6.dir/build: ex4_6
.PHONY : CMakeFiles/ex4_6.dir/build

CMakeFiles/ex4_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex4_6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex4_6.dir/clean

CMakeFiles/ex4_6.dir/depend:
	cd /home/test/accelerated/ex4_6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/test/accelerated/ex4_6 /home/test/accelerated/ex4_6 /home/test/accelerated/ex4_6/cmake-build-debug /home/test/accelerated/ex4_6/cmake-build-debug /home/test/accelerated/ex4_6/cmake-build-debug/CMakeFiles/ex4_6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex4_6.dir/depend

