#include "Insertion_Sort.h"
#include <vector>
#include <iostream>
using namespace std;


Insertion_Sort::Insertion_Sort() {}
Insertion_Sort::~Insertion_Sort() {}

void Insertion_Sort::sort(vector<int> &vec) {

	for(int i = 1; i < vec.size(); i++) {
		int j = i - 1;
		while(j >= 0 && vec.at(j) > vec.at(j+1)) {
			int temp = vec.at(j+1);
			vec.at(j+1) = vec.at(j);
			vec.at(j) = temp;
			j--;
		}
	}


}


