#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here


std::string reverse_string(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}

} // namespace reverse_string
