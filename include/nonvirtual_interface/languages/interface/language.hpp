#pragma once

#include <string>

namespace nonvirtual_interface {

class language {
 public:
  std::string greetings() const { return do_greetings(); }

 protected:
  virtual std::string do_greetings() const = 0;
};

}  // namespace nonvirtual_interface
