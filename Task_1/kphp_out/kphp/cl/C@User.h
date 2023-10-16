//crc64:9273901aff345fc7
//crc64_with_comments:0000000000000000
#pragma once
#include "cl/C@Account.h"

struct C$User final : public C$Account {
  const char *get_class() const  noexcept  final {
    return R"(User)";
  }

  int get_hash() const  noexcept  final {
    return -157093864;
  }

  };

