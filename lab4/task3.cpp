#include "lab04.hpp"
#include <vector>
#include <iostream>
int argmax(const std::vector<float>& v) {
	if (v.empty()){
		return -1;
	}
	else{
		float max = 0;
		int index;
		for (int i = 0; i < v.size(); i++){
			if (v[i]>max){
				max = v[i];
				index = i;
			}
		}
		return index;
	}	
}
