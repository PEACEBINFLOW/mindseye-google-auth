#pragma once
#include <string>

namespace mindseye::google::auth {

struct Principal {
  std::string id;     // orch:alice | agent:routing | svc:gateway
  std::string type;   // orch | agent | svc
};

}
