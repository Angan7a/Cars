#pragma once
#include<string>

class InvalidGear {
private:
    std::string error_;
public:
	InvalidGear(std::string error);
	const char* what() const;

};
