#include "lab04.hpp"
#include <vector>
#include <iostream>
std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
	std::string result = str;
	size_t pos = 0;
	while ((pos = result.find(old, pos)) != std::string::npos) {
		for (int i = 0; i < size(new_string); i++) {
			result[pos] = new_string[i];
			pos++;
		}
	}
	return result;
}

