#pragma once
#include "mindseye/google/auth/principal.hpp"
#include "mindseye/google/auth/token.hpp"

namespace mindseye::google::auth {

class Authority {
public:
  Token issue_user_token(const Principal& principal);
  Token issue_service_token(const Principal& principal);
};

}
