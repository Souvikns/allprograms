# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/souvikde/CLionProjects/untitled23

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/souvikde/CLionProjects/untitled23/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled23.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled23.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled23.dir/flags.make

CMakeFiles/untitled23.dir/main.cpp.o: CMakeFiles/untitled23.dir/flags.make
CMakeFiles/untitled23.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/souvikde/CLionProjects/untitled23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled23.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled23.dir/main.cpp.o -c /Users/souvikde/CLionProjects/untitled23/main.cpp

CMakeFiles/untitled23.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled23.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/souvikde/CLionProjects/untitled23/main.cpp > CMakeFiles/untitled23.dir/main.cpp.i

CMakeFiles/untitled23.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled23.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/souvikde/CLionProjects/untitled23/main.cpp -o CMakeFiles/untitled23.dir/main.cpp.s

# Object files for target untitled23
untitled23_OBJECTS = \
"CMakeFiles/untitled23.dir/main.cpp.o"

# External object files for target untitled23
untitled23_EXTERNAL_OBJECTS =

untitled23: CMakeFiles/untitled23.dir/main.cpp.o
untitled23: CMakeFiles/untitled23.dir/build.make
untitled23: CMakeFiles/untitled23.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/souvikde/CLionProjects/untitled23/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled23"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled23.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled23.dir/build: untitled23

.PHONY : CMakeFiles/untitled23.dir/build

CMakeFiles/untitled23.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled23.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled23.dir/clean

CMakeFiles/untitled23.dir/depend:
	cd /Users/souvikde/CLionProjects/untitled23/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/souvikde/CLionProjects/untitled23 /Users/souvikde/CLionProjects/untitled23 /Users/souvikde/CLionProjects/untitled23/cmake-build-debug /Users/souvikde/CLionProjects/untitled23/cmake-build-debug /Users/souvikde/CLionProjects/untitled23/cmake-build-debug/CMakeFiles/untitled23.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled23.dir/depend

