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
CMAKE_SOURCE_DIR = /home/azraa/ros2_ws/src/my_cpp_pkg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/azraa/ros2_ws/build/my_cpp_pkg

# Include any dependencies generated for this target.
include CMakeFiles/add_two_ints_client_no_oop.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/add_two_ints_client_no_oop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/add_two_ints_client_no_oop.dir/flags.make

CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.o: CMakeFiles/add_two_ints_client_no_oop.dir/flags.make
CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.o: /home/azraa/ros2_ws/src/my_cpp_pkg/src/add_two_ints_client_no_oop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/azraa/ros2_ws/build/my_cpp_pkg/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.o -c /home/azraa/ros2_ws/src/my_cpp_pkg/src/add_two_ints_client_no_oop.cpp

CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/azraa/ros2_ws/src/my_cpp_pkg/src/add_two_ints_client_no_oop.cpp > CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.i

CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/azraa/ros2_ws/src/my_cpp_pkg/src/add_two_ints_client_no_oop.cpp -o CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.s

# Object files for target add_two_ints_client_no_oop
add_two_ints_client_no_oop_OBJECTS = \
"CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.o"

# External object files for target add_two_ints_client_no_oop
add_two_ints_client_no_oop_EXTERNAL_OBJECTS =

add_two_ints_client_no_oop: CMakeFiles/add_two_ints_client_no_oop.dir/src/add_two_ints_client_no_oop.cpp.o
add_two_ints_client_no_oop: CMakeFiles/add_two_ints_client_no_oop.dir/build.make
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librclcpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libexample_interfaces__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libexample_interfaces__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libexample_interfaces__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libexample_interfaces__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/liblibstatistics_collector.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librmw_implementation.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librmw.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_logging_spdlog.so
add_two_ints_client_no_oop: /usr/lib/x86_64-linux-gnu/libspdlog.so.1.5.0
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libyaml.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libtracetools.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libexample_interfaces__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libaction_msgs__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libaction_msgs__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_generator_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/libunique_identifier_msgs__rosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosidl_typesupport_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcpputils.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librosidl_runtime_c.so
add_two_ints_client_no_oop: /opt/ros/foxy/lib/librcutils.so
add_two_ints_client_no_oop: CMakeFiles/add_two_ints_client_no_oop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/azraa/ros2_ws/build/my_cpp_pkg/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable add_two_ints_client_no_oop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add_two_ints_client_no_oop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/add_two_ints_client_no_oop.dir/build: add_two_ints_client_no_oop

.PHONY : CMakeFiles/add_two_ints_client_no_oop.dir/build

CMakeFiles/add_two_ints_client_no_oop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/add_two_ints_client_no_oop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/add_two_ints_client_no_oop.dir/clean

CMakeFiles/add_two_ints_client_no_oop.dir/depend:
	cd /home/azraa/ros2_ws/build/my_cpp_pkg && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/azraa/ros2_ws/src/my_cpp_pkg /home/azraa/ros2_ws/src/my_cpp_pkg /home/azraa/ros2_ws/build/my_cpp_pkg /home/azraa/ros2_ws/build/my_cpp_pkg /home/azraa/ros2_ws/build/my_cpp_pkg/CMakeFiles/add_two_ints_client_no_oop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/add_two_ints_client_no_oop.dir/depend

