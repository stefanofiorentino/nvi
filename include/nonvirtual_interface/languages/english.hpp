#pragma once

#include <string>

#include "interface/language.hpp"

namespace nonvirtual_interface {
namespace languages {

class english : public language {
 protected:
  std::string do_greetings() const override { return "Hello"; }
};

}  // namespace languages
}  // namespace nonvirtual_interface
