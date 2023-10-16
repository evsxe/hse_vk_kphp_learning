//crc64:4d8e11a676f6a87b
//crc64_with_comments:0000000000000000
#pragma once
#include "cl/C@Account.h"

struct C$Admin final : public C$Account {
  const char *get_class() const  noexcept  final {
    return R"(Admin)";
  }

  int get_hash() const  noexcept  final {
    return 333565744;
  }

  };

