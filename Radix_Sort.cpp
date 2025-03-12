#include <vector>
#include <queue>
#include "Radix_Sort.h"

using namespace std;


Radix_Sort::Radix_Sort() {}
Radix_Sort::~Radix_Sort() {}

void Radix_Sort::sort(vector<int> &vec) {

	vector<queue<int>> bucket(10);
	vector<int> temp(vec.size());
	int max = vec.at(0);

	for(int i = 1; i < vec.size(); i++) if(vec.at(i) > max) max = vec.at(i);

	int key_size = to_string(max).size();
	int div = 1;

	for(int i = 0; i < key_size; i++) {

		for(int j = 0; j < vec.size(); j++) {

			int num = vec.at(j) / div;
			int remainder = num % 10;

			bucket.at(remainder).push(vec.at(j));

		}
		div *= 10;
		int count = 0;
		for(int k = 0; k < bucket.size(); k++) {

			while(!bucket.at(k).empty()) {
				vec.at(count) = bucket.at(k).front();
				bucket.at(k).pop();
				count++;
			}

		}	


	}	


}


