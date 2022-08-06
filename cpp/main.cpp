/*** 
 * @Date: 2022-08-06 14:19:55
 * @LastEditors: Freddd13
 * @LastEditTime: 2022-08-06 14:22:53
 * @Description: 
 * @yzdyzd13@gmail.com
 */
#include <gflags/gflags.h>
#include <glog/logging.h>

#include <cmath>
#include <cstdio>
#include <fstream>
#include <iomanip>
#include <iostream>

#include "Eigen/Core"
#include "Eigen/Geometry"

DEFINE_string(bag, "/home/yxt/code/slam/dataset/po_2022-07-21-18-21-24.bag",
              "bag file");
DEFINE_string(
    out,
    "/home/yxt/code/slam/kumo_slam_ws/src/kumo_slam/results/pose/gt/rtk_gt.txt",
    "output dir");
DEFINE_double(yaw, 65.268274, "yaw");

int main(int argc, char const *argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);

  FLAGS_alsologtostderr = 1;
  FLAGS_max_log_size = 5120;
  FLAGS_stderrthreshold = 0;
  FLAGS_log_dir = "../log/";

  LOG(WARNING) << "This is INFO log information\r";
  LOG(INFO) << FLAGS_bag;

  CHECK(1 < 2) << "The world is end, because one is not less than  2. ";
}
