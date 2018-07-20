#pragma once
#include<string>
#include <stdexcept>

class InvalidGear : public std::invalid_argument {
public:
	InvalidGear(std::string s);
};
