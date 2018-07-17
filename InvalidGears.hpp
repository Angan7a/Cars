#pragma once
#include<string>
#include <stdexcept>

class InvalidGears : public std::invalid_argument {
public:
	InvalidGears(std::string s);
};
