# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\PROJECT\C_Homework\Homework13\104

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\PROJECT\C_Homework\Homework13\104\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/104.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/104.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/104.dir/flags.make

CMakeFiles/104.dir/main.c.obj: CMakeFiles/104.dir/flags.make
CMakeFiles/104.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\PROJECT\C_Homework\Homework13\104\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/104.dir/main.c.obj"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\104.dir\main.c.obj   -c D:\PROJECT\C_Homework\Homework13\104\main.c

CMakeFiles/104.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/104.dir/main.c.i"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\PROJECT\C_Homework\Homework13\104\main.c > CMakeFiles\104.dir\main.c.i

CMakeFiles/104.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/104.dir/main.c.s"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\PROJECT\C_Homework\Homework13\104\main.c -o CMakeFiles\104.dir\main.c.s

CMakeFiles/104.dir/main.c.obj.requires:

.PHONY : CMakeFiles/104.dir/main.c.obj.requires

CMakeFiles/104.dir/main.c.obj.provides: CMakeFiles/104.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\104.dir\build.make CMakeFiles/104.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/104.dir/main.c.obj.provides

CMakeFiles/104.dir/main.c.obj.provides.build: CMakeFiles/104.dir/main.c.obj


# Object files for target 104
104_OBJECTS = \
"CMakeFiles/104.dir/main.c.obj"

# External object files for target 104
104_EXTERNAL_OBJECTS =

104.exe: CMakeFiles/104.dir/main.c.obj
104.exe: CMakeFiles/104.dir/build.make
104.exe: CMakeFiles/104.dir/linklibs.rsp
104.exe: CMakeFiles/104.dir/objects1.rsp
104.exe: CMakeFiles/104.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\PROJECT\C_Homework\Homework13\104\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 104.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\104.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/104.dir/build: 104.exe

.PHONY : CMakeFiles/104.dir/build

CMakeFiles/104.dir/requires: CMakeFiles/104.dir/main.c.obj.requires

.PHONY : CMakeFiles/104.dir/requires

CMakeFiles/104.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\104.dir\cmake_clean.cmake
.PHONY : CMakeFiles/104.dir/clean

CMakeFiles/104.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\PROJECT\C_Homework\Homework13\104 D:\PROJECT\C_Homework\Homework13\104 D:\PROJECT\C_Homework\Homework13\104\cmake-build-debug D:\PROJECT\C_Homework\Homework13\104\cmake-build-debug D:\PROJECT\C_Homework\Homework13\104\cmake-build-debug\CMakeFiles\104.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/104.dir/depend

