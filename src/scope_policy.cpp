#include "mindseye/google/auth/scope_policy.hpp"

namespace mindseye::google::auth {

bool ScopePolicy::allow(const std::string&, const std::string& scope) const {
  return allowed_.count(scope) > 0;
}

void ScopePolicy::load_from_json(const std::string&) {
  // parse allowed scopes
}

}
