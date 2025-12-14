#include "mindseye/google/auth/authority.hpp"

namespace mindseye::google::auth {

Token Authority::issue_user_token(const Principal&) {
  return {};
}

Token Authority::issue_service_token(const Principal&) {
  return {};
}

}
