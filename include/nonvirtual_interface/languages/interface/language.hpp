#pragma once

#include <iostream>
#include <string>

namespace nonvirtual_interface {

class language {
 public:
  std::string greetings() const {
    std::puts("entering..");
    auto const& rc = do_greetings();
    std::puts("..exiting");
    return rc;
  }

 protected:
  virtual std::string do_greetings() const = 0;
};
}
