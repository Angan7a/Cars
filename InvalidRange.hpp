#pragma once
#include<string>
#include <stdexcept>

class InvalidRange : public std::out_of_range {
public:
	InvalidRange(std::string);
};
