#include "lab04.hpp"

std::string join(const std::vector<std::string>& v, const std::string& sep) {
	std::string res;
	for (int i = 0; i < v.size(); i++) {
		res += v[i] + sep;
	}
	res.erase(size(res) - 1);
	return res;
}
