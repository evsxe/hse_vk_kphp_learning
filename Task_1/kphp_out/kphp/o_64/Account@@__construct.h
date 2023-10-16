//crc64:2a6ddd0f52a46615
//crc64_with_comments:96d57d6db19def29
#pragma once
#include "runtime-headers.h"
#include "cl/C@Account.h"
inline class_instance<C$Account> f$Account$$__construct(class_instance<C$Account> const &v$this, Optional < string > const &v$name) noexcept ;
//source = [initial.php]
//5:   public function __construct($name) { 
class_instance<C$Account> f$Account$$__construct(class_instance<C$Account> const &v$this, Optional < string > const &v$name) noexcept  {
//6:       $this->name = $name; 
  v$this->$name = v$name;
//7:   } 
//8: }
  return v$this;
}


