#pragma once
#include<string>
#include <stdexcept>

class InvalidPower : public std::bad_alloc {
public:
	InvalidPower();
};
