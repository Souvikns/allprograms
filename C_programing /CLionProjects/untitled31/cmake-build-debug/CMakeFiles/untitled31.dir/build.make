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
CMAKE_SOURCE_DIR = /Users/souvikde/CLionProjects/untitled31

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/souvikde/CLionProjects/untitled31/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled31.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled31.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled31.dir/flags.make

CMakeFiles/untitled31.dir/main.c.o: CMakeFiles/untitled31.dir/flags.make
CMakeFiles/untitled31.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/souvikde/CLionProjects/untitled31/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/untitled31.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/untitled31.dir/main.c.o   -c /Users/souvikde/CLionProjects/untitled31/main.c

CMakeFiles/untitled31.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/untitled31.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/souvikde/CLionProjects/untitled31/main.c > CMakeFiles/untitled31.dir/main.c.i

CMakeFiles/untitled31.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/untitled31.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/souvikde/CLionProjects/untitled31/main.c -o CMakeFiles/untitled31.dir/main.c.s

# Object files for target untitled31
untitled31_OBJECTS = \
"CMakeFiles/untitled31.dir/main.c.o"

# External object files for target untitled31
untitled31_EXTERNAL_OBJECTS =

untitled31: CMakeFiles/untitled31.dir/main.c.o
untitled31: CMakeFiles/untitled31.dir/build.make
untitled31: CMakeFiles/untitled31.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/souvikde/CLionProjects/untitled31/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable untitled31"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled31.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled31.dir/build: untitled31

.PHONY : CMakeFiles/untitled31.dir/build

CMakeFiles/untitled31.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled31.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled31.dir/clean

CMakeFiles/untitled31.dir/depend:
	cd /Users/souvikde/CLionProjects/untitled31/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/souvikde/CLionProjects/untitled31 /Users/souvikde/CLionProjects/untitled31 /Users/souvikde/CLionProjects/untitled31/cmake-build-debug /Users/souvikde/CLionProjects/untitled31/cmake-build-debug /Users/souvikde/CLionProjects/untitled31/cmake-build-debug/CMakeFiles/untitled31.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled31.dir/depend

