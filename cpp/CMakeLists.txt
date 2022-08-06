cmake_minimum_required (VERSION 3.0)
project (myproject)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)
find_package(PCL REQUIRED)

find_package(PkgConfig REQUIRED)
pkg_check_modules(glog REQUIRED libglog)

find_package (Glog REQUIRED)
include_directories(${GLOG_INCLUDE_DIRS})

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable (main main.cpp)
target_link_libraries (main Eigen3::Eigen ${GLOG_LIBRARIES} ${GFLAGS_LIBRARIES})
# target_link_libraries (main Eigen3::Eigen ${PCL_LIBRARIES} )

# install glog:
# sudo apt-get install -y libunwind-dev
# sudo apt install -y libgoogle-glog-dev