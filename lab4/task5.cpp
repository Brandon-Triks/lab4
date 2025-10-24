#include "lab04.hpp"

bool remove_first_negative_element(std::vector<int>& v, int& removed_element) {
	int k = 0;
	for (int i = 0; i < v.size(); i++) {
		if ((v[i] < 0) && (k < 1)) {
			k++;
			removed_element = v[i];
			v.erase(v.begin() + i);
		}
	}
	if (removed_element) {
		return true;
	}
	else { 
		removed_element = 0;
		return false;
	}
}

