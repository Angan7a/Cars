#pragma once

#include <stdexcept>

class InvalidGear : public std::invalid_argument {
public:
	InvalidGear();
};
