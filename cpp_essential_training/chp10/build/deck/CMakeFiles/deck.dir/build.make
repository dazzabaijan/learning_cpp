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
CMAKE_SOURCE_DIR = /home/darren/linkedin_cpp/cpp_essential_training/chp10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/darren/linkedin_cpp/cpp_essential_training/chp10/build

# Include any dependencies generated for this target.
include deck/CMakeFiles/deck.dir/depend.make

# Include the progress variables for this target.
include deck/CMakeFiles/deck.dir/progress.make

# Include the compile flags for this target's objects.
include deck/CMakeFiles/deck.dir/flags.make

deck/CMakeFiles/deck.dir/deck.cpp.o: deck/CMakeFiles/deck.dir/flags.make
deck/CMakeFiles/deck.dir/deck.cpp.o: ../deck/deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/darren/linkedin_cpp/cpp_essential_training/chp10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object deck/CMakeFiles/deck.dir/deck.cpp.o"
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/deck.dir/deck.cpp.o -c /home/darren/linkedin_cpp/cpp_essential_training/chp10/deck/deck.cpp

deck/CMakeFiles/deck.dir/deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/deck.dir/deck.cpp.i"
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/darren/linkedin_cpp/cpp_essential_training/chp10/deck/deck.cpp > CMakeFiles/deck.dir/deck.cpp.i

deck/CMakeFiles/deck.dir/deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/deck.dir/deck.cpp.s"
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/darren/linkedin_cpp/cpp_essential_training/chp10/deck/deck.cpp -o CMakeFiles/deck.dir/deck.cpp.s

# Object files for target deck
deck_OBJECTS = \
"CMakeFiles/deck.dir/deck.cpp.o"

# External object files for target deck
deck_EXTERNAL_OBJECTS =

deck/libdeck.a: deck/CMakeFiles/deck.dir/deck.cpp.o
deck/libdeck.a: deck/CMakeFiles/deck.dir/build.make
deck/libdeck.a: deck/CMakeFiles/deck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/darren/linkedin_cpp/cpp_essential_training/chp10/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdeck.a"
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck && $(CMAKE_COMMAND) -P CMakeFiles/deck.dir/cmake_clean_target.cmake
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/deck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
deck/CMakeFiles/deck.dir/build: deck/libdeck.a

.PHONY : deck/CMakeFiles/deck.dir/build

deck/CMakeFiles/deck.dir/clean:
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck && $(CMAKE_COMMAND) -P CMakeFiles/deck.dir/cmake_clean.cmake
.PHONY : deck/CMakeFiles/deck.dir/clean

deck/CMakeFiles/deck.dir/depend:
	cd /home/darren/linkedin_cpp/cpp_essential_training/chp10/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/darren/linkedin_cpp/cpp_essential_training/chp10 /home/darren/linkedin_cpp/cpp_essential_training/chp10/deck /home/darren/linkedin_cpp/cpp_essential_training/chp10/build /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck /home/darren/linkedin_cpp/cpp_essential_training/chp10/build/deck/CMakeFiles/deck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : deck/CMakeFiles/deck.dir/depend
