#include "lab04.hpp"
#include <vector>
#include <string>
#include <iostream>
std::vector<std::string> split(const std::string& str, char sep) {
	std::vector<std::string> result{};
	std::string copy = str;
	size_t it = 0;
	size_t pos = 0;
	while ((pos = str.find(sep, it)) != (std::string::npos)) {
		result.push_back(copy.substr(it, pos - it));
		it = pos + 1;
	}
	result.push_back(copy.substr(it));
	return result;
}
	

	