/***
 * @Date: 2022-09-27 19:02:30
 * @LastEditors: Freddd13
 * @LastEditTime: 2022-09-27 19:56:07
 * @Description:
 * @yzdyzd13@gmail.com
 */
#include "kumo_algorithms.h"

struct Params {
 public:
  Params(YAML::Node config) {
    log_path_ = config["log_path"].as<std::string>();
    result_path_ = config["result_path"].as<std::string>();
    voxel_size_ = config["voxel_size"].as<float>();
    std_var_ = config["std_var"].as<float>();
    eps_ = config["eps"].as<float>();
  }
  ~Params() {}
  std::string log_path_;
  std::string result_path_;
  float voxel_size_;
  float max_distance_;
  float std_var_;
  float eps_;
};
