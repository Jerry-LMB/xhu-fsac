# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/cmake/cmake-3.20.0-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake/cmake-3.20.0-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xhu-fsac/new_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xhu-fsac/new_ws/build

# Include any dependencies generated for this target.
include usb_cam/CMakeFiles/usb_cam_node.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include usb_cam/CMakeFiles/usb_cam_node.dir/compiler_depend.make

# Include the progress variables for this target.
include usb_cam/CMakeFiles/usb_cam_node.dir/progress.make

# Include the compile flags for this target's objects.
include usb_cam/CMakeFiles/usb_cam_node.dir/flags.make

usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o: usb_cam/CMakeFiles/usb_cam_node.dir/flags.make
usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o: /home/xhu-fsac/new_ws/src/usb_cam/nodes/usb_cam_node.cpp
usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o: usb_cam/CMakeFiles/usb_cam_node.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xhu-fsac/new_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o"
	cd /home/xhu-fsac/new_ws/build/usb_cam && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o -MF CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o.d -o CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o -c /home/xhu-fsac/new_ws/src/usb_cam/nodes/usb_cam_node.cpp

usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.i"
	cd /home/xhu-fsac/new_ws/build/usb_cam && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xhu-fsac/new_ws/src/usb_cam/nodes/usb_cam_node.cpp > CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.i

usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.s"
	cd /home/xhu-fsac/new_ws/build/usb_cam && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xhu-fsac/new_ws/src/usb_cam/nodes/usb_cam_node.cpp -o CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.s

# Object files for target usb_cam_node
usb_cam_node_OBJECTS = \
"CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o"

# External object files for target usb_cam_node
usb_cam_node_EXTERNAL_OBJECTS =

/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: usb_cam/CMakeFiles/usb_cam_node.dir/nodes/usb_cam_node.cpp.o
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: usb_cam/CMakeFiles/usb_cam_node.dir/build.make
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /home/xhu-fsac/new_ws/devel/lib/libusb_cam.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libimage_transport.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libmessage_filters.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libclass_loader.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/libPocoFoundation.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libdl.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libroslib.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/librospack.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libcamera_info_manager.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libcamera_calibration_parsers.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libroscpp.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/librosconsole.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/librostime.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /opt/ros/melodic/lib/libcpp_common.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node: usb_cam/CMakeFiles/usb_cam_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xhu-fsac/new_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node"
	cd /home/xhu-fsac/new_ws/build/usb_cam && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usb_cam_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
usb_cam/CMakeFiles/usb_cam_node.dir/build: /home/xhu-fsac/new_ws/devel/lib/usb_cam/usb_cam_node
.PHONY : usb_cam/CMakeFiles/usb_cam_node.dir/build

usb_cam/CMakeFiles/usb_cam_node.dir/clean:
	cd /home/xhu-fsac/new_ws/build/usb_cam && $(CMAKE_COMMAND) -P CMakeFiles/usb_cam_node.dir/cmake_clean.cmake
.PHONY : usb_cam/CMakeFiles/usb_cam_node.dir/clean

usb_cam/CMakeFiles/usb_cam_node.dir/depend:
	cd /home/xhu-fsac/new_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xhu-fsac/new_ws/src /home/xhu-fsac/new_ws/src/usb_cam /home/xhu-fsac/new_ws/build /home/xhu-fsac/new_ws/build/usb_cam /home/xhu-fsac/new_ws/build/usb_cam/CMakeFiles/usb_cam_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : usb_cam/CMakeFiles/usb_cam_node.dir/depend

