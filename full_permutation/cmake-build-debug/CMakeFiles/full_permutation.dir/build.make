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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Go for offer\full_permutation"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Go for offer\full_permutation\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/full_permutation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/full_permutation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/full_permutation.dir/flags.make

CMakeFiles/full_permutation.dir/main.cpp.obj: CMakeFiles/full_permutation.dir/flags.make
CMakeFiles/full_permutation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Go for offer\full_permutation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/full_permutation.dir/main.cpp.obj"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\full_permutation.dir\main.cpp.obj -c "E:\Go for offer\full_permutation\main.cpp"

CMakeFiles/full_permutation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/full_permutation.dir/main.cpp.i"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Go for offer\full_permutation\main.cpp" > CMakeFiles\full_permutation.dir\main.cpp.i

CMakeFiles/full_permutation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/full_permutation.dir/main.cpp.s"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Go for offer\full_permutation\main.cpp" -o CMakeFiles\full_permutation.dir\main.cpp.s

CMakeFiles/full_permutation.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/full_permutation.dir/main.cpp.obj.requires

CMakeFiles/full_permutation.dir/main.cpp.obj.provides: CMakeFiles/full_permutation.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\full_permutation.dir\build.make CMakeFiles/full_permutation.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/full_permutation.dir/main.cpp.obj.provides

CMakeFiles/full_permutation.dir/main.cpp.obj.provides.build: CMakeFiles/full_permutation.dir/main.cpp.obj


# Object files for target full_permutation
full_permutation_OBJECTS = \
"CMakeFiles/full_permutation.dir/main.cpp.obj"

# External object files for target full_permutation
full_permutation_EXTERNAL_OBJECTS =

full_permutation.exe: CMakeFiles/full_permutation.dir/main.cpp.obj
full_permutation.exe: CMakeFiles/full_permutation.dir/build.make
full_permutation.exe: CMakeFiles/full_permutation.dir/linklibs.rsp
full_permutation.exe: CMakeFiles/full_permutation.dir/objects1.rsp
full_permutation.exe: CMakeFiles/full_permutation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Go for offer\full_permutation\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable full_permutation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\full_permutation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/full_permutation.dir/build: full_permutation.exe

.PHONY : CMakeFiles/full_permutation.dir/build

CMakeFiles/full_permutation.dir/requires: CMakeFiles/full_permutation.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/full_permutation.dir/requires

CMakeFiles/full_permutation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\full_permutation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/full_permutation.dir/clean

CMakeFiles/full_permutation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Go for offer\full_permutation" "E:\Go for offer\full_permutation" "E:\Go for offer\full_permutation\cmake-build-debug" "E:\Go for offer\full_permutation\cmake-build-debug" "E:\Go for offer\full_permutation\cmake-build-debug\CMakeFiles\full_permutation.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/full_permutation.dir/depend

