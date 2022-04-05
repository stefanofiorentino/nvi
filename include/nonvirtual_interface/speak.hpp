#pragma once

#include "languages/interface/language.hpp"

namespace nonvirtual_interface {
    namespace speak{
inline std::string greetings(language&& language) { return language.greetings(); }
    }
}