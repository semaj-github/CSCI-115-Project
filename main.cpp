#include <iostream>
#include "Heap.h"
#include <limits>
#include <sstream>
int main() {

	Heap heap;

	vector<int> vec;

	int answer = 0;
	cout << "Enter 0 for ascending and 1 for descending order" << endl;
	cin >> answer;
	cin.clear();  
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 		

	cout << "Input arrary: ";
	int read = -1;
	while(1) {
		cin >> read;
		if(!cin) break;
		vec.push_back(read);
	}
	
	if (answer == 0) heap.buildMaxHeap(vec);
	else heap.buildMinHeap(vec);
	cin.clear();  
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 		

	cout << "Input element: ";
	int element;
	cin >> element;
	if(answer == 0) heap.insert_value_maxHeap(vec, element);
	else heap.insert_value_minHeap(vec, element);

	cout << "sorted heap: ";
	if(answer == 0) heap.ascendingHeapSort(vec);
	else heap.descendingHeapSort(vec);
	heap.print(vec);


	if(answer == 0) {
		cout << "On calling extract_maximum: ";
		int extract = heap.extract_maximum(vec);
		cout << extract << endl;
		cout << "Sorted heap is" << endl;
		heap.ascendingHeapSort(vec);
		heap.print(vec);
	} else {

		cout << "On calling extract_minimum: ";
		int extract = heap.extract_minimum(vec);
		cout << extract << endl;
		cout << "Sorted heap is" << endl;
		heap.descendingHeapSort(vec);
		heap.print(vec);
	}



}
