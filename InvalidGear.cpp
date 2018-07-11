#include "InvalidGear.hpp"

InvalidGear::InvalidGear(std::string error) : error_(error) {}

const char* InvalidGear::what() const {
    return error_.c_str();
}

