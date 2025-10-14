#include "lab04.hpp"

void sort(std::vector<float>& v) {
	for (int i = 0; i < v.size(); i++) {
		for (int k = 0; k < v.size() - 1 - i; k++) {
			if (v[k] < v[k + 1]) {
				std::swap(v[k], v[k + 1]);
			}
		}
	}
}

