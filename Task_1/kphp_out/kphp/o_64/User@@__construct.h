//crc64:ddd5586a2045e2a9
//crc64_with_comments:4b35c88d80e1beac
#pragma once
#include "runtime-headers.h"
#include "cl/C@User.h"
inline class_instance<C$User> f$User$$__construct(class_instance<C$User> const &v$this, Optional < string > const &v$name) noexcept ;
#include "o_64/Account@@__construct.h"
//source = [initial.php]
//11:   public function __construct($name) { 
class_instance<C$User> f$User$$__construct(class_instance<C$User> const &v$this, Optional < string > const &v$name) noexcept  {
//12:       parent::__construct($name); 
  f$Account$$__construct(v$this, v$name);
//13:   } 
//14: } 
  return v$this;
}


