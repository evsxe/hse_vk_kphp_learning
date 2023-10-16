//crc64:587cf765a9c1ffb6
//crc64_with_comments:3288a12938bef2ed
#include "runtime-headers.h"
#include "o_64/print_names.h"
extern string v$const_string$us1fe1a8d8fb9a6d18;

extern string v$const_string$us590ce86cce246342;

//source = [initial.php]
//41: function print_names($names) { 
void f$print_names(array< Optional < string > > const &v$names) noexcept  {
  Optional < string > v$name;
  array< Optional < string > > v$tmp_expr$ub88328b6e30e720c_0;
  decltype(const_begin(v$tmp_expr$ub88328b6e30e720c_0)) v$tmp_expr$ub88328b6e30e720c_0$it;
  decltype(const_begin(v$tmp_expr$ub88328b6e30e720c_0)) v$tmp_expr$ub88328b6e30e720c_0$it$end;
//42:   foreach ($names as $name) { 
  {
    v$tmp_expr$ub88328b6e30e720c_0 = v$names;
    v$tmp_expr$ub88328b6e30e720c_0$it = const_begin(v$tmp_expr$ub88328b6e30e720c_0);
    v$tmp_expr$ub88328b6e30e720c_0$it$end = const_end(v$tmp_expr$ub88328b6e30e720c_0);
    for (; v$tmp_expr$ub88328b6e30e720c_0$it != v$tmp_expr$ub88328b6e30e720c_0$it$end; ++v$tmp_expr$ub88328b6e30e720c_0$it) {
      v$name = v$tmp_expr$ub88328b6e30e720c_0$it.get_value();
//43:       echo "name=$name<br>"; 
      {
        f$echo(({
          const Optional < string > &tmp_var0=v$name;
          string::size_type tmp_strlen = 9 + max_string_size (tmp_var0);
          string tmp_string_ = string (tmp_strlen, true).append_unsafe ("name=", 5).append_unsafe (tmp_var0).append_unsafe ("<br>", 4).finish_append();
          tmp_string_;
        }));
      };

    }
    clear_array(v$tmp_expr$ub88328b6e30e720c_0);
  };
  return ;
}


