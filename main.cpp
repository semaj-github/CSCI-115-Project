#include <iostream>
#include "Heap.h"
#include "Selection_Sort.h"
#include "Merge_Sort.h"
#include "Counting_Sort.h"
#include "Radix_Sort.h"
#include "Insertion_Sort.h"

int main() {

/**
    Insertion - complete 
    Selection - complete 
    Bubble 
    Merge sort - complete
    Quicksort
    Heapsort - complete 
    Counting Sort - complete
    Radix Sort - complete
**/


	vector<int> test = {5, 4, 9, 2, 22, 3, 44, 33, 0, 10, 21};
	
	vector<int> test2 = test;
	vector<int> test3 = test2;
	vector<int> test4 = test3;
	vector<int> test5 = test4;
	vector<int> test6 = test5;

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
	cout << endl;

	Counting_Sort counting_sort;
	counting_sort.sort(test4);	
	for(int x : test4) cout << x << ", ";
	cout << endl;

	
	Radix_Sort radix_sort;
	radix_sort.sort(test5);
	for(int x : test5) cout << x << ", ";
	cout << endl;
	
	Insertion_Sort insertion_sort;
	insertion_sort.sort(test6);
	for(int x : test6) cout << x << ", ";
	cout << endl;

}
