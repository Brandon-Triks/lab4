#include "lab04.hpp"
#include <vector>
#include <iostream>
std::pair<float, float> minMax(const std::vector<float>& v) {
	std::pair <float, float> result;
	float max = 0, min = 10000000000;
	if (v.empty()) {
		result.first = std::numeric_limits<float>::min();
		result.second = std::numeric_limits<float>::max();
	}
	else {
		for (auto i : v) {
			if (i > max) { max = i; }
			if (i < min) { min = i; }
		}
		result.first = min;
		result.second = max;
	}
	return result;
}
