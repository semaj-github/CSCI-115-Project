#include <vector>
#include "Bubble_Sort.h"

using namespace std;


Bubble_Sort::Bubble_Sort() {}
Bubble_Sort::~Bubble_Sort() {}

void Bubble_Sort::sort(vector<int> &vec) {

	int size = vec.size() - 1;

	for(int i = 0; size - 1 > i; i++) {

		for(int j = 0; j < size; j++) {

			if(vec.at(j) > vec.at(j+1)) {
				int temp = vec.at(j+1);
				vec.at(j+1) = vec.at(j);
				vec.at(j) =  temp;	

			}
		}


	}

}




