#pragma once
#include <string>
#include <vector>
#include <chrono>

namespace mindseye::google::auth {

struct Token {
  std::string access_token;
  std::vector<std::string> scopes;
  std::chrono::system_clock::time_point expires_at;
};

}
