/***
 * @Date: 2022-09-27 20:03:50
 * @LastEditors: Freddd13
 * @LastEditTime: 2022-09-27 20:04:38
 * @Description:
 * @yzdyzd13@gmail.com
 */

#include "kumo_algorithms.h"
#include "params.hpp"

int main(int argc, char** argv) {
  // init gflags
  google::ParseCommandLineFlags(&argc, &argv, true);

  // init glog
  // for non-ros
  YAML::Node config = YAML::LoadFile("../config/config.yaml");
  Params params(config);
  std::string log_dir = params.log_path_;

  // for ros
  // std::string log_dir = ros::package::getPath("intensity_calibration") + "/log/";
  // ROS_WARN("Log dir: %s", log_dir.c_str());
  // FLAGS_log_dir = log_dir;

  FLAGS_log_dir = log_dir;
  FLAGS_stderrthreshold = 0;
  FLAGS_colorlogtostderr = true;
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "log dir: " << log_dir;

  // read params

  return 0;
}