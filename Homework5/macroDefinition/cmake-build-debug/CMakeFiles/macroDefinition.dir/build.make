# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_SOURCE_DIR = D:\PROJECT\C_Homework\Homework5\macroDefinition

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\PROJECT\C_Homework\Homework5\macroDefinition\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/macroDefinition.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/macroDefinition.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/macroDefinition.dir/flags.make

CMakeFiles/macroDefinition.dir/main.c.obj: CMakeFiles/macroDefinition.dir/flags.make
CMakeFiles/macroDefinition.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\PROJECT\C_Homework\Homework5\macroDefinition\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/macroDefinition.dir/main.c.obj"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\macroDefinition.dir\main.c.obj   -c D:\PROJECT\C_Homework\Homework5\macroDefinition\main.c

CMakeFiles/macroDefinition.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/macroDefinition.dir/main.c.i"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\PROJECT\C_Homework\Homework5\macroDefinition\main.c > CMakeFiles\macroDefinition.dir\main.c.i

CMakeFiles/macroDefinition.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/macroDefinition.dir/main.c.s"
	D:\CodeBlocks\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\PROJECT\C_Homework\Homework5\macroDefinition\main.c -o CMakeFiles\macroDefinition.dir\main.c.s

CMakeFiles/macroDefinition.dir/main.c.obj.requires:

.PHONY : CMakeFiles/macroDefinition.dir/main.c.obj.requires

CMakeFiles/macroDefinition.dir/main.c.obj.provides: CMakeFiles/macroDefinition.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\macroDefinition.dir\build.make CMakeFiles/macroDefinition.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/macroDefinition.dir/main.c.obj.provides

CMakeFiles/macroDefinition.dir/main.c.obj.provides.build: CMakeFiles/macroDefinition.dir/main.c.obj


# Object files for target macroDefinition
macroDefinition_OBJECTS = \
"CMakeFiles/macroDefinition.dir/main.c.obj"

# External object files for target macroDefinition
macroDefinition_EXTERNAL_OBJECTS =

macroDefinition.exe: CMakeFiles/macroDefinition.dir/main.c.obj
macroDefinition.exe: CMakeFiles/macroDefinition.dir/build.make
macroDefinition.exe: CMakeFiles/macroDefinition.dir/linklibs.rsp
macroDefinition.exe: CMakeFiles/macroDefinition.dir/objects1.rsp
macroDefinition.exe: CMakeFiles/macroDefinition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\PROJECT\C_Homework\Homework5\macroDefinition\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable macroDefinition.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\macroDefinition.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/macroDefinition.dir/build: macroDefinition.exe

.PHONY : CMakeFiles/macroDefinition.dir/build

CMakeFiles/macroDefinition.dir/requires: CMakeFiles/macroDefinition.dir/main.c.obj.requires

.PHONY : CMakeFiles/macroDefinition.dir/requires

CMakeFiles/macroDefinition.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\macroDefinition.dir\cmake_clean.cmake
.PHONY : CMakeFiles/macroDefinition.dir/clean

CMakeFiles/macroDefinition.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\PROJECT\C_Homework\Homework5\macroDefinition D:\PROJECT\C_Homework\Homework5\macroDefinition D:\PROJECT\C_Homework\Homework5\macroDefinition\cmake-build-debug D:\PROJECT\C_Homework\Homework5\macroDefinition\cmake-build-debug D:\PROJECT\C_Homework\Homework5\macroDefinition\cmake-build-debug\CMakeFiles\macroDefinition.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/macroDefinition.dir/depend
