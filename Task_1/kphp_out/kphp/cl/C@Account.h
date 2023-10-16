//crc64:ecc0b651cb3129ae
//crc64_with_comments:0000000000000000
#pragma once

struct C$Account: public refcountable_polymorphic_php_classes<abstract_refcountable_php_interface> {
  Optional < string > $name{};
  virtual ~C$Account() = default;
  virtual const char *get_class() const  noexcept {
    return R"(Account)";
  }

  virtual int get_hash() const  noexcept {
    return 588864475;
  }

  };

