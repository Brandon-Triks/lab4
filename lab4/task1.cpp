#include "lab04.hpp"
#include <vector>

float mean(const std::vector<float>& v) {
	float sum = 0;
	for (auto n: v) {
		sum += n;
	}
	return sum / v.size();
}
