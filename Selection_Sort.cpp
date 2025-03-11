#include <vector>
#include "Selection_Sort.h"

using namespace std;


Selection_Sort::Selection_Sort() {}
Selection_Sort::~Selection_Sort() {}


void Selection_Sort::sort(vector<int> &vec) {

	for(int i = 0; i < vec.size() - 1; i++) {

		int min = i;

		for(int j = i+1; j < vec.size(); j++) {
			if(vec.at(j) < vec.at(min)) min = j;
		}

		int temp = vec.at(i);
		vec.at(i) = vec.at(min);
		vec.at(min) = temp;
	}

}
