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
CMAKE_SOURCE_DIR = /home/azraa/ros2_ws/src/M2S2/bme280

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/azraa/ros2_ws/src/build/bme280

# Include any dependencies generated for this target.
include CMakeFiles/bme280.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bme280.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bme280.dir/flags.make

CMakeFiles/bme280.dir/src/driver/bme280_linux.c.o: CMakeFiles/bme280.dir/flags.make
CMakeFiles/bme280.dir/src/driver/bme280_linux.c.o: /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280_linux.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azraa/ros2_ws/src/build/bme280/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bme280.dir/src/driver/bme280_linux.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bme280.dir/src/driver/bme280_linux.c.o   -c /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280_linux.c

CMakeFiles/bme280.dir/src/driver/bme280_linux.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bme280.dir/src/driver/bme280_linux.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280_linux.c > CMakeFiles/bme280.dir/src/driver/bme280_linux.c.i

CMakeFiles/bme280.dir/src/driver/bme280_linux.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bme280.dir/src/driver/bme280_linux.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280_linux.c -o CMakeFiles/bme280.dir/src/driver/bme280_linux.c.s

CMakeFiles/bme280.dir/src/driver/bme280.c.o: CMakeFiles/bme280.dir/flags.make
CMakeFiles/bme280.dir/src/driver/bme280.c.o: /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azraa/ros2_ws/src/build/bme280/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/bme280.dir/src/driver/bme280.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bme280.dir/src/driver/bme280.c.o   -c /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280.c

CMakeFiles/bme280.dir/src/driver/bme280.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bme280.dir/src/driver/bme280.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280.c > CMakeFiles/bme280.dir/src/driver/bme280.c.i

CMakeFiles/bme280.dir/src/driver/bme280.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bme280.dir/src/driver/bme280.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/azraa/ros2_ws/src/M2S2/bme280/src/driver/bme280.c -o CMakeFiles/bme280.dir/src/driver/bme280.c.s

# Object files for target bme280
bme280_OBJECTS = \
"CMakeFiles/bme280.dir/src/driver/bme280_linux.c.o" \
"CMakeFiles/bme280.dir/src/driver/bme280.c.o"

# External object files for target bme280
bme280_EXTERNAL_OBJECTS =

libbme280.a: CMakeFiles/bme280.dir/src/driver/bme280_linux.c.o
libbme280.a: CMakeFiles/bme280.dir/src/driver/bme280.c.o
libbme280.a: CMakeFiles/bme280.dir/build.make
libbme280.a: CMakeFiles/bme280.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/azraa/ros2_ws/src/build/bme280/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libbme280.a"
	$(CMAKE_COMMAND) -P CMakeFiles/bme280.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bme280.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bme280.dir/build: libbme280.a

.PHONY : CMakeFiles/bme280.dir/build

CMakeFiles/bme280.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bme280.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bme280.dir/clean

CMakeFiles/bme280.dir/depend:
	cd /home/azraa/ros2_ws/src/build/bme280 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/azraa/ros2_ws/src/M2S2/bme280 /home/azraa/ros2_ws/src/M2S2/bme280 /home/azraa/ros2_ws/src/build/bme280 /home/azraa/ros2_ws/src/build/bme280 /home/azraa/ros2_ws/src/build/bme280/CMakeFiles/bme280.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bme280.dir/depend

