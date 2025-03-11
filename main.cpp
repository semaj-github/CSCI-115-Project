#include <iostream>
#include "Heap.h"
#include "Selection_Sort.h"
#include "Merge_Sort.h"

int main() {



/**
    Insertion
    Selection - complete 
    Bubble 
    Merge sort - complete
    Quicksort
    Heapsort - complete 
    Counting Sort
    Radix Sort
**/


	vector<int> test = {5, 4, 9, 2, 22, 3, 44, 33, 0, 10, 21};
	
	vector<int> test2 = test;
	vector<int> test3 = test2;

	Selection_Sort selection_sort;
	selection_sort.sort(test);

	for(int x : test) cout << x << ", ";
	cout << endl;


	Merge_Sort merge_sort;
	merge_sort.sort(test2, 0, test2.size()-1);

	for(int x : test2) cout << x << ", ";
	cout << endl;

	Heap heap;
	heap.buildMaxHeap(test3);
	heap.ascendingHeapSort(test3);

	for(int x : test3) cout << x << ", ";

}
