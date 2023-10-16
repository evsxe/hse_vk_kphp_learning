//crc64:e1f5b3274998bc27
//crc64_with_comments:de0d6d06bd0c7473
#include "runtime-headers.h"
#include "o_64/AccountFactory@@newAccount.h"
#include "o_64/Admin@@__construct.h"
#include "o_64/User@@__construct.h"
extern string v$const_string$us26375dea009d51f3;

extern string v$const_string$us42f9bf2813e1cf30;

extern string v$const_string$us96377ddff2b9434b;

extern string v$const_string$usadf0db14f5e770aa;

extern string v$const_string$usc1085493f6a2f018;

extern string v$const_string$usfad9a4efa0db0b31;

//source = [initial.php]
//41:   public static function newAccount($name) { 
class_instance<C$Account> f$AccountFactory$$newAccount(mixed const &v$name) noexcept  {
//42:       if (strpos($name, 'User') !== false) { 
  if (!(equals (f$strpos(f$strval (v$name), v$const_string$usc1085493f6a2f018), false))) {
//43:           return new User(substr($name, 0, strpos($name, '_User')));
    return f$User$$__construct(class_instance<C$User>().alloc(), f$substr(f$strval (v$name), 0_i64, f$intval (val(f$strpos(f$strval (v$name), v$const_string$usfad9a4efa0db0b31)))));
//44:       } elseif (strpos($name, 'Admin') !== false) { 
  } else {
    if (!(equals (f$strpos(f$strval (v$name), v$const_string$us42f9bf2813e1cf30), false))) {
//45:           return new Admin(substr($name, 0, strpos($name, '_Admin')));
      return f$Admin$$__construct(class_instance<C$Admin>().alloc(), f$substr(f$strval (v$name), 0_i64, f$intval (val(f$strpos(f$strval (v$name), v$const_string$usadf0db14f5e770aa)))));
//46:       } else { 
//47:           throw new Exception('Invalid account type'); 
    } else {
      {
        THROW_EXCEPTION (f$_exception_set_location(f$Exception$$__construct(class_instance<C$Exception>().alloc(), v$const_string$us26375dea009d51f3), v$const_string$us96377ddff2b9434b, 47_i64));
        return {};
      }
      ;
    };
  };
}


