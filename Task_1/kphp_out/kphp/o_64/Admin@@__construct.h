//crc64:f053df3983a9e281
//crc64_with_comments:4b35c88d80e1beac
#pragma once
#include "runtime-headers.h"
#include "cl/C@Admin.h"
inline class_instance<C$Admin> f$Admin$$__construct(class_instance<C$Admin> const &v$this, Optional < string > const &v$name) noexcept ;
#include "o_64/Account@@__construct.h"
//source = [initial.php]
//17:   public function __construct($name) { 
class_instance<C$Admin> f$Admin$$__construct(class_instance<C$Admin> const &v$this, Optional < string > const &v$name) noexcept  {
//18:       parent::__construct($name); 
  f$Account$$__construct(v$this, v$name);
//19:   } 
//20: } 
  return v$this;
}


