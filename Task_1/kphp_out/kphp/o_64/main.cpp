//crc64:7519352c6638453d
//crc64_with_comments:a8ec06a19a6c2ee9
#include "runtime-headers.h"
#include "o_64/main.h"
#include "cl/C@Account.h"
#include "o_64/AccountFactory@@collect_names.h"
#include "o_64/AccountFactory@@newAccount.h"
#include "o_64/print_names.h"
extern mixed v$_GET;

extern string v$const_string$us17440fdc24cfd854;

extern string v$const_string$us4c516c8e57be73bf;

extern array< Unknown > v$const_array$us68788cf2824807c5;

//source = [initial.php]
//47: function main() { 
void f$main() noexcept  {
  array< class_instance<C$Account> > v$accounts;
  array< Optional < string > > v$names;
  mixed v$raw;
  mixed v$raw_accounts;
  mixed v$tmp_expr$ua4b4090b8f936f2c_0;
  decltype(const_begin(v$tmp_expr$ua4b4090b8f936f2c_0)) v$tmp_expr$ua4b4090b8f936f2c_0$it;
  decltype(const_begin(v$tmp_expr$ua4b4090b8f936f2c_0)) v$tmp_expr$ua4b4090b8f936f2c_0$it$end;
//48:   $raw_accounts = $_GET['accounts']; 
  v$raw_accounts = v$_GET.get_value (v$const_string$us17440fdc24cfd854, 1926875143400074046_i64);
//49:   if (!$raw_accounts) { 
  if (!f$boolval (v$raw_accounts)) {
//50:       die('$_GET["accounts"] is empty'); 
    f$die(v$const_string$us4c516c8e57be73bf);
  };
//51:   } 
//52:    
//53:   $accounts = []; 
  v$accounts = v$const_array$us68788cf2824807c5;
//54:   foreach ($raw_accounts as $raw) { 
  {
    v$tmp_expr$ua4b4090b8f936f2c_0 = check_not_null (check_not_false (v$raw_accounts));
    v$tmp_expr$ua4b4090b8f936f2c_0$it = const_begin(v$tmp_expr$ua4b4090b8f936f2c_0);
    v$tmp_expr$ua4b4090b8f936f2c_0$it$end = const_end(v$tmp_expr$ua4b4090b8f936f2c_0);
    for (; v$tmp_expr$ua4b4090b8f936f2c_0$it != v$tmp_expr$ua4b4090b8f936f2c_0$it$end; ++v$tmp_expr$ua4b4090b8f936f2c_0$it) {
      v$raw = v$tmp_expr$ua4b4090b8f936f2c_0$it.get_value();
//55:       $accounts[] = AccountFactory::newAccount($raw); 
      (v$accounts).push_back (TRY_CALL_ (class_instance<C$Account>, f$AccountFactory$$newAccount(v$raw), return ));

    }
    clear_array(v$tmp_expr$ua4b4090b8f936f2c_0);
  };
//56:   } 
//57:    
//58:   $names = AccountFactory::collect_names($accounts); 
  v$names = f$AccountFactory$$collect_names(v$accounts);
//59:   print_names($names); 
  f$print_names(v$names);
  return ;
}


