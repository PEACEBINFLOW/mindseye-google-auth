#pragma once
#include <stdexcept>

namespace mindseye::google::auth {

struct AuthError : public std::runtime_error {
  using std::runtime_error::runtime_error;
};

}
