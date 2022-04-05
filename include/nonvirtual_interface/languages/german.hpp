#pragma once

#include <string>

#include "interface/language.hpp"

namespace nonvirtual_interface {
namespace languages {

class german : public language {
 protected:
  std::string do_greetings() const override { return "Hallo"; }
};

}  // namespace languages
}  // namespace nonvirtual_interface
