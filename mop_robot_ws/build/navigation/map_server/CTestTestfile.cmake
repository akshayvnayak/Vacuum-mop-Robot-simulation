# CMake generated Testfile for 
# Source directory: /mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server
# Build directory: /mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/navigation/map_server
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_map_server_gtest_map_server_utest "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/test_results/map_server/gtest-map_server_utest.xml" "--return-code" "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/devel/lib/map_server/map_server_utest --gtest_output=xml:/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/test_results/map_server/gtest-map_server_utest.xml")
set_tests_properties(_ctest_map_server_gtest_map_server_utest PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/opt/ros/noetic/share/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server/CMakeLists.txt;89;catkin_add_gtest;/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server/CMakeLists.txt;0;")
add_test(_ctest_map_server_rostest_test_rtest.xml "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/test_results/map_server/rostest-test_rtest.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server --package=map_server --results-filename test_rtest.xml --results-base-dir \"/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/build/test_results\" /mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server/test/rtest.xml ")
set_tests_properties(_ctest_map_server_rostest_test_rtest.xml PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server/CMakeLists.txt;108;add_rostest;/mnt/2AB63CB0B63C7DFF/Projects/minor/Vacuum-mop-Robot-simulation/mop_robot_ws/src/navigation/map_server/CMakeLists.txt;0;")
