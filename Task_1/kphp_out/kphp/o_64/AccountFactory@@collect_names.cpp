//crc64:089086f668ec3db8
//crc64_with_comments:e145d26b8e31ffb2
#include "runtime-headers.h"
#include "o_64/AccountFactory@@collect_names.h"
#include "o_l/lambda@ua6f49208acb382f0_0.h"
//source = [initial.php]
//33:   public static function collect_names($accounts) {  
array< Optional < string > > f$AccountFactory$$collect_names(array< class_instance<C$Account> > const &v$accounts) noexcept  {
//source = [initial.php]
//34:       return array_map(function ($account) {  
  return f$array_map([](auto &&... args)  noexcept {
    return f$lambda$ua6f49208acb382f0_0(std::forward<decltype(args)>(args)...);
//35:           /** @var Account $account */ 
//36:           return $account->name;  
//37:       }, $accounts);  
  }, v$accounts);
}


