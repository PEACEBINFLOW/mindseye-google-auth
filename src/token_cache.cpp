#include "mindseye/google/auth/token_cache.hpp"

namespace mindseye::google::auth {

bool TokenCache::get(const std::string& key, Token& out) const {
  auto it = cache_.find(key);
  if (it == cache_.end()) return false;
  out = it->second;
  return true;
}

void TokenCache::put(const std::string& key, const Token& token) {
  cache_[key] = token;
}

}
