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
CMAKE_SOURCE_DIR = "E:\Go for offer\reverse_string"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Go for offer\reverse_string\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/reverse_string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/reverse_string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/reverse_string.dir/flags.make

CMakeFiles/reverse_string.dir/main.cpp.obj: CMakeFiles/reverse_string.dir/flags.make
CMakeFiles/reverse_string.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Go for offer\reverse_string\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/reverse_string.dir/main.cpp.obj"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\reverse_string.dir\main.cpp.obj -c "E:\Go for offer\reverse_string\main.cpp"

CMakeFiles/reverse_string.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/reverse_string.dir/main.cpp.i"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Go for offer\reverse_string\main.cpp" > CMakeFiles\reverse_string.dir\main.cpp.i

CMakeFiles/reverse_string.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/reverse_string.dir/main.cpp.s"
	"C:\Program Files (x86)\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Go for offer\reverse_string\main.cpp" -o CMakeFiles\reverse_string.dir\main.cpp.s

CMakeFiles/reverse_string.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/reverse_string.dir/main.cpp.obj.requires

CMakeFiles/reverse_string.dir/main.cpp.obj.provides: CMakeFiles/reverse_string.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\reverse_string.dir\build.make CMakeFiles/reverse_string.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/reverse_string.dir/main.cpp.obj.provides

CMakeFiles/reverse_string.dir/main.cpp.obj.provides.build: CMakeFiles/reverse_string.dir/main.cpp.obj


# Object files for target reverse_string
reverse_string_OBJECTS = \
"CMakeFiles/reverse_string.dir/main.cpp.obj"

# External object files for target reverse_string
reverse_string_EXTERNAL_OBJECTS =

reverse_string.exe: CMakeFiles/reverse_string.dir/main.cpp.obj
reverse_string.exe: CMakeFiles/reverse_string.dir/build.make
reverse_string.exe: CMakeFiles/reverse_string.dir/linklibs.rsp
reverse_string.exe: CMakeFiles/reverse_string.dir/objects1.rsp
reverse_string.exe: CMakeFiles/reverse_string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Go for offer\reverse_string\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable reverse_string.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\reverse_string.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/reverse_string.dir/build: reverse_string.exe

.PHONY : CMakeFiles/reverse_string.dir/build

CMakeFiles/reverse_string.dir/requires: CMakeFiles/reverse_string.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/reverse_string.dir/requires

CMakeFiles/reverse_string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\reverse_string.dir\cmake_clean.cmake
.PHONY : CMakeFiles/reverse_string.dir/clean

CMakeFiles/reverse_string.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Go for offer\reverse_string" "E:\Go for offer\reverse_string" "E:\Go for offer\reverse_string\cmake-build-debug" "E:\Go for offer\reverse_string\cmake-build-debug" "E:\Go for offer\reverse_string\cmake-build-debug\CMakeFiles\reverse_string.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/reverse_string.dir/depend
