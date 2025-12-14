#pragma once
#include <string>
#include <unordered_set>

namespace mindseye::google::auth {

class ScopePolicy {
public:
  bool allow(const std::string& principal, const std::string& scope) const;
  void load_from_json(const std::string& json);

private:
  std::unordered_set<std::string> allowed_;
};

}
