#include <iostream>
#include <vector>
#include "Merge_Sort.h"

using namespace std;


Merge_Sort::Merge_Sort() {}
Merge_Sort::~Merge_Sort() {}

void Merge_Sort::merge(vector<int> &vec, int start, int mid, int end) {

	vector<int> vec_left(vec.begin() + start, vec.begin() + mid + 1);
	vector<int> vec_right(vec.begin() + mid + 1, vec.begin() + end + 1);
	int left_count = 0;
	int right_count = 0;
	int index = start;

	while(left_count < vec_left.size() && right_count < vec_right.size()) {

		if(vec_left.at(left_count) <= vec_right.at(right_count)) {
			vec.at(index) = vec_left.at(left_count);
			left_count++;
		}
		else{
			vec.at(index) = vec_right.at(right_count);
			right_count++;
		}
		index++;

	}

	while(left_count < vec_left.size()) {

		vec.at(index) = vec_left.at(left_count);
		index++;
		left_count++;

	}
	while(right_count < vec_right.size()) {

		vec.at(index) = vec_right.at(right_count);
		index++;
		right_count++;

	}

}


vector<int> Merge_Sort::sort(vector<int> &vec, int start, int end) {

	if (start >= end) return vec;

	sort(vec, start, (start+end) / 2);
	sort(vec, (start+end) / 2 + 1, end);
	merge(vec, start, (start+end) / 2, end);

	return vec;
}

