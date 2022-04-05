#include <cassert>
#include <cstdlib>
#include <iostream>

#include <nonvirtual_interface/speak.hpp>
#include <nonvirtual_interface/languages/english.hpp>
#include <nonvirtual_interface/languages/german.hpp>

using nonvirtual_interface::speak::greetings;
using nonvirtual_interface::languages::english;
using nonvirtual_interface::languages::german;

int main(int, char **) {
  assert("Hello" == greetings(english()) && "Should be in English");
  assert("Hello" != greetings(german()) && "Should be in English");
  assert("Hallo" == greetings(german()) && "Should be in German");
  assert("Hallo" != greetings(english()) && "Should be in German");
  return EXIT_SUCCESS;
}