cmake_minimum_required(VERSION 3.20)
project(mindseye_google_auth LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(mindseye_google_auth
  src/authority.cpp
  src/principal.cpp
  src/token.cpp
  src/scope_policy.cpp
  src/token_cache.cpp
  src/oauth_flow.cpp
)

target_include_directories(mindseye_google_auth
  PUBLIC
    include
)

if (MSVC)
  target_compile_options(mindseye_google_auth PRIVATE /W4)
else()
  target_compile_options(mindseye_google_auth PRIVATE -Wall -Wextra -Wpedantic)
endif()
