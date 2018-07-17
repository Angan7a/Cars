#pragma once
#include<string>
#include <stdexcept>

class InvalidPower : public std::out_of_range {
public:
	InvalidPower(std::string);
};
