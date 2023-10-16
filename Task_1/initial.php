<?php

// This code works in PHP.
//
// Run builtin PHP web server like so:
//
// php -S localhost:8080 ./main.php
//
// Then visit this page in your browser:
//
// http://localhost:8080/?accounts[]=Rulon_User&accounts[]=Bidon_Admin
//
// The output should be:
//
// name=Rulon
// name=Bidon
//
// TODO: Make this code compile and run with KPHP with minimal
// changes while trying to keep the code as idiomatic as possible.

// We have created the Account class from which we inherit variables
class Account { 
  public $name; 
  public function __construct($name) { 
      $this->name = $name; 
  } 
}

// With the extend method we get 
// rid of the problem with inheritance of used variables 
class User extends Account { 
  public function __construct($name) { 
      parent::__construct($name); 
  } 
} 

// Here we also use extend
class Admin extends Account { 
  public function __construct($name) { 
      parent::__construct($name); 
  } 
} 

class AccountFactory { 
  public static function newAccount($name) { 
      if (strpos($name, 'User') !== false) { 
          return new User(substr($name, 0, strpos($name, '_User')));
      } elseif (strpos($name, 'Admin') !== false) { 
          return new Admin(substr($name, 0, strpos($name, '_Admin')));
      } else { 
          throw new Exception('Invalid account type'); 
      } 
  } 
  
  // The collect_names function has been moved to the AccountFactory class
  // to get rid of the problem with unknown variables
  public static function collect_names($accounts) {  
      return array_map(function ($account) {  
          /** @var Account $account */ 
          return $account->name;  
      }, $accounts);  
  } 
} 

function print_names($names) { 
  foreach ($names as $name) { 
      echo "name=$name<br>"; 
  } 
} 

function main() { 
  $raw_accounts = $_GET['accounts']; 
  if (!$raw_accounts) { 
      die('$_GET["accounts"] is empty'); 
  } 
   
  $accounts = []; 
  foreach ($raw_accounts as $raw) { 
      $accounts[] = AccountFactory::newAccount($raw); 
  } 
   
  $names = AccountFactory::collect_names($accounts); 
  // Apparently there was a typo Print_names -> print_names
  print_names($names); 
} 

main(); 

