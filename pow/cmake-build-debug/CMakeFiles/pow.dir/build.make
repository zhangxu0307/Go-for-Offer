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
CMAKE_SOURCE_DIR = "E:\Go for offer\pow"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Go for offer\pow\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/pow.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pow.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pow.dir/flags.make

CMakeFiles/pow.dir/main.cpp.obj: CMakeFiles/pow.dir/flags.make
CMakeFiles/pow.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Go for offer\pow\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pow.dir/main.cpp.obj"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pow.dir\main.cpp.obj -c "E:\Go for offer\pow\main.cpp"

CMakeFiles/pow.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pow.dir/main.cpp.i"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Go for offer\pow\main.cpp" > CMakeFiles\pow.dir\main.cpp.i

CMakeFiles/pow.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pow.dir/main.cpp.s"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Go for offer\pow\main.cpp" -o CMakeFiles\pow.dir\main.cpp.s

CMakeFiles/pow.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/pow.dir/main.cpp.obj.requires

CMakeFiles/pow.dir/main.cpp.obj.provides: CMakeFiles/pow.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\pow.dir\build.make CMakeFiles/pow.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/pow.dir/main.cpp.obj.provides

CMakeFiles/pow.dir/main.cpp.obj.provides.build: CMakeFiles/pow.dir/main.cpp.obj


# Object files for target pow
pow_OBJECTS = \
"CMakeFiles/pow.dir/main.cpp.obj"

# External object files for target pow
pow_EXTERNAL_OBJECTS =

pow.exe: CMakeFiles/pow.dir/main.cpp.obj
pow.exe: CMakeFiles/pow.dir/build.make
pow.exe: CMakeFiles/pow.dir/linklibs.rsp
pow.exe: CMakeFiles/pow.dir/objects1.rsp
pow.exe: CMakeFiles/pow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Go for offer\pow\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pow.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pow.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pow.dir/build: pow.exe

.PHONY : CMakeFiles/pow.dir/build

CMakeFiles/pow.dir/requires: CMakeFiles/pow.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/pow.dir/requires

CMakeFiles/pow.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pow.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pow.dir/clean

CMakeFiles/pow.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Go for offer\pow" "E:\Go for offer\pow" "E:\Go for offer\pow\cmake-build-debug" "E:\Go for offer\pow\cmake-build-debug" "E:\Go for offer\pow\cmake-build-debug\CMakeFiles\pow.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/pow.dir/depend

