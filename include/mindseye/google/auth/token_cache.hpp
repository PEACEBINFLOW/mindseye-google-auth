#pragma once
#include "mindseye/google/auth/token.hpp"
#include <unordered_map>
#include <string>

namespace mindseye::google::auth {

class TokenCache {
public:
  bool get(const std::string& key, Token& out) const;
  void put(const std::string& key, const Token& token);

private:
  std::unordered_map<std::string, Token> cache_;
};

}
