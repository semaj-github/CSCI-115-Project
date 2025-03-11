#include <iostream>
#include <vector>
#include "Heap.h"
using namespace std;

Heap::Heap() {}
Heap::~Heap() {}

//good!
void Heap::print(vector<int> vec) {
	for(int i = 0; i < vec.size(); i++) {
		if(i == vec.size()-1) cout << vec.at(i) << endl;
		else cout << vec.at(i) << " ";
	}

}

//good!
void Heap::modifyValMax (vector<int> &vec, int i, int val) {
	vec.at(i-1) = val;

	int end = vec.size() - 1;
	for(int i = end; i > 0; i--) {
		int parent = (i-1)/2;

		if(vec.at(i) > vec.at(parent)) {
			int temp = vec.at(parent);
			vec.at(parent) = vec.at(i);
			vec.at(i) = temp;
		}

	}
}

//good!
void Heap::insert_value_maxHeap (vector<int> &vec, int val) {

	vec.push_back(val);

	int cur = (( (vec.size()-1) / 2) - 1) ;

	for(int i = cur; i >= 0; i--) {
		max_heapify(vec, i);
	}
}




//good!
void Heap::max_heapify(vector<int> &vec, int i){

	int left_child = (i*2) + 1;
	int right_child = (i*2) + 2;
	int largest = i;

	if( (left_child < vec.size()) && (vec.at(largest) < vec.at(left_child)) ) largest = left_child;

	if( (right_child < vec.size()) && (vec.at(largest) < vec.at(right_child)) ) largest = right_child;

	if(largest != i) {

		int temp = vec.at(i);
		vec.at(i) = vec.at(largest);
		vec.at(largest) = temp;
		max_heapify(vec, largest);

	}
}


int Heap::extract_maximum (vector<int> &vec) {


	buildMaxHeap(vec);
	int temp = vec.at(0);
	vec.at(0) = vec.at(vec.size() - 1);
	vec.pop_back();

	max_heapify(vec, 0);
	return temp;

} 



void Heap::max_heapify2(vector<int> &vec, int i, int &n){

	int left_child = (i*2) + 1;
	int right_child = (i*2) + 2;
	int largest = i;

	if( (left_child < n) && (vec.at(largest) < vec.at(left_child)) ) largest = left_child;

	if( (right_child < n) && (vec.at(largest) < vec.at(right_child)) ) largest = right_child;

	if(largest != i) {

		int temp = vec.at(i);
		vec.at(i) = vec.at(largest);
		vec.at(largest) = temp;
		max_heapify2(vec, largest, n);

	}
}

void Heap::ascendingHeapSort(vector<int> &vec) {

	buildMaxHeap(vec);

	for(int i = vec.size()-1; i >= 0; i--) {
		int temp = vec.at(i);
		vec.at(i) = vec.at(0);
		vec.at(0) = temp;
		max_heapify2(vec, 0, i);
	}



}


void Heap::buildMaxHeap(vector<int> &vec) {

	for(int i = ( (vec.size()/2) -1); i >= 0; i--) {
		max_heapify(vec, i);
	}
}







//Min Heap					 
void Heap::modifyValMin (vector<int> &vec, int i, int val) {
	vec.at(i-1) = val;

	int end = vec.size() - 1;
	for(int i = end; i > 0; i--) {
		int parent = (i-1)/2;

		if(vec.at(i) < vec.at(parent)) {
			int temp = vec.at(parent);
			vec.at(parent) = vec.at(i);
			vec.at(i) = temp;
		}

	}
}


void Heap::insert_value_minHeap (vector<int> &vec, int val) {

	vec.push_back(val);

	int cur = (( (vec.size()-1) / 2) - 1) ;

	for(int i = cur; i >= 0; i--) {
		min_heapify(vec, i);
	}
}

void Heap::min_heapify(vector<int> &vec, int i){

	int left_child = (i*2) + 1;
	int right_child = (i*2) + 2;
	int smallest = i;

	if( (left_child < vec.size()) && (vec.at(smallest) > vec.at(left_child)) ) smallest = left_child;

	if( (right_child < vec.size()) && (vec.at(smallest) > vec.at(right_child)) ) smallest = right_child;

	if(smallest != i) {

		int temp = vec.at(i);
		vec.at(i) = vec.at(smallest);
		vec.at(smallest) = temp;
		min_heapify(vec, smallest);

	}
}



int Heap::extract_minimum (vector<int> &vec) {

	buildMinHeap(vec);
	int temp = vec.at(0);
	vec.at(0) = vec.at(vec.size() - 1);
	vec.pop_back();

	min_heapify(vec, 0);
	return temp;

}


void Heap::min_heapify2(vector<int> &vec, int i, int &n){

	int left_child = (i*2) + 1;
	int right_child = (i*2) + 2;
	int smallest = i;

	if( (left_child < n) && (vec.at(smallest) > vec.at(left_child)) ) smallest = left_child;

	if( (right_child < n) && (vec.at(smallest) > vec.at(right_child)) ) smallest = right_child;

	if(smallest != i) {

		int temp = vec.at(i);
		vec.at(i) = vec.at(smallest);
		vec.at(smallest) = temp;
		min_heapify2(vec, smallest, n);

	}
}



void Heap::descendingHeapSort(vector<int> &vec) {

	buildMinHeap(vec);

	for(int i = vec.size()-1; i >= 0; i--) {
		int temp = vec.at(i);
		vec.at(i) = vec.at(0);
		vec.at(0) = temp;
		min_heapify2(vec, 0, i);
	}

}

void Heap::buildMinHeap(vector<int> &vec) {

	for(int i = ( (vec.size()/2) -1); i >= 0; i--) {
		min_heapify(vec, i);
	}
}


