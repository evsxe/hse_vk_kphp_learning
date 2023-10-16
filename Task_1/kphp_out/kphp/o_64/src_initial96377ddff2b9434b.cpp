//crc64:7587bf4a7731f1b2
//crc64_with_comments:50671804cf406125
#include "runtime-headers.h"
#include "o_64/src_initial96377ddff2b9434b.h"
#include "o_64/main.h"
extern bool v$src_initial96377ddff2b9434b$called;

//source = [initial.php]
//3: class Account { 
Optional < bool > f$src_initial96377ddff2b9434b() noexcept  {
  v$src_initial96377ddff2b9434b$called = true;
//57:           continue; 
//58:       } 
//59:       $accounts[] = AccountFactory::newAccount($parts[0]); 
//60:   } 
//61:    
//62:   $names = AccountFactory::collect_names($accounts); 
//63:   print_names($names); 
//64: } 
//65: 
//66: main(); 
  TRY_CALL_VOID_ (f$main(), return {});
  return Optional<bool>{};
}


