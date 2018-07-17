#pragma once
#include<string>
#include <stdexcept>

class InvalidPower : public std::invalid_argument {
public:
	InvalidPower();
};
