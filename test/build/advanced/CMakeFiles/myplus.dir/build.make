# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hmxroot/Documents/ros/test/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hmxroot/Documents/ros/test/build

# Include any dependencies generated for this target.
include advanced/CMakeFiles/myplus.dir/depend.make

# Include the progress variables for this target.
include advanced/CMakeFiles/myplus.dir/progress.make

# Include the compile flags for this target's objects.
include advanced/CMakeFiles/myplus.dir/flags.make

advanced/CMakeFiles/myplus.dir/src/myplus.cpp.o: advanced/CMakeFiles/myplus.dir/flags.make
advanced/CMakeFiles/myplus.dir/src/myplus.cpp.o: /home/hmxroot/Documents/ros/test/src/advanced/src/myplus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hmxroot/Documents/ros/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object advanced/CMakeFiles/myplus.dir/src/myplus.cpp.o"
	cd /home/hmxroot/Documents/ros/test/build/advanced && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myplus.dir/src/myplus.cpp.o -c /home/hmxroot/Documents/ros/test/src/advanced/src/myplus.cpp

advanced/CMakeFiles/myplus.dir/src/myplus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myplus.dir/src/myplus.cpp.i"
	cd /home/hmxroot/Documents/ros/test/build/advanced && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hmxroot/Documents/ros/test/src/advanced/src/myplus.cpp > CMakeFiles/myplus.dir/src/myplus.cpp.i

advanced/CMakeFiles/myplus.dir/src/myplus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myplus.dir/src/myplus.cpp.s"
	cd /home/hmxroot/Documents/ros/test/build/advanced && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hmxroot/Documents/ros/test/src/advanced/src/myplus.cpp -o CMakeFiles/myplus.dir/src/myplus.cpp.s

# Object files for target myplus
myplus_OBJECTS = \
"CMakeFiles/myplus.dir/src/myplus.cpp.o"

# External object files for target myplus
myplus_EXTERNAL_OBJECTS =

/home/hmxroot/Documents/ros/test/devel/lib/libmyplus.so: advanced/CMakeFiles/myplus.dir/src/myplus.cpp.o
/home/hmxroot/Documents/ros/test/devel/lib/libmyplus.so: advanced/CMakeFiles/myplus.dir/build.make
/home/hmxroot/Documents/ros/test/devel/lib/libmyplus.so: advanced/CMakeFiles/myplus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hmxroot/Documents/ros/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/hmxroot/Documents/ros/test/devel/lib/libmyplus.so"
	cd /home/hmxroot/Documents/ros/test/build/advanced && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myplus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
advanced/CMakeFiles/myplus.dir/build: /home/hmxroot/Documents/ros/test/devel/lib/libmyplus.so

.PHONY : advanced/CMakeFiles/myplus.dir/build

advanced/CMakeFiles/myplus.dir/clean:
	cd /home/hmxroot/Documents/ros/test/build/advanced && $(CMAKE_COMMAND) -P CMakeFiles/myplus.dir/cmake_clean.cmake
.PHONY : advanced/CMakeFiles/myplus.dir/clean

advanced/CMakeFiles/myplus.dir/depend:
	cd /home/hmxroot/Documents/ros/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hmxroot/Documents/ros/test/src /home/hmxroot/Documents/ros/test/src/advanced /home/hmxroot/Documents/ros/test/build /home/hmxroot/Documents/ros/test/build/advanced /home/hmxroot/Documents/ros/test/build/advanced/CMakeFiles/myplus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : advanced/CMakeFiles/myplus.dir/depend
