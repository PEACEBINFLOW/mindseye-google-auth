#include "mindseye/google/auth/principal.hpp"

namespace mindseye::google::auth {

// Minimal normalization helper.
// Keeps identity explicit: orch:, agent:, svc: only.
static bool starts_with(const std::string& s, const std::string& prefix) {
  return s.rfind(prefix, 0) == 0;
}

Principal normalize_principal(const std::string& raw) {
  Principal p;
  p.id = raw;

  if (starts_with(raw, "orch:")) {
    p.type = "orch";
    return p;
  }
  if (starts_with(raw, "agent:")) {
    p.type = "agent";
    return p;
  }
  if (starts_with(raw, "svc:")) {
    p.type = "svc";
    return p;
  }

  // Unknown principal type → force explicit classification upstream.
  p.type = "unknown";
  return p;
}

} // namespace mindseye::google::auth
