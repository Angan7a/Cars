#include "InvalidRange.hpp"

InvalidRange::InvalidRange(std::string s) : std::out_of_range(s) {}

