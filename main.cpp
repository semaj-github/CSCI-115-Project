#include <iostream>
#include "Heap.h"
#include "Selection_Sort.h"
#include "Merge_Sort.h"
#include "Counting_Sort.h"
#include "Radix_Sort.h"
#include "Insertion_Sort.h"
#include "Bubble_Sort.h"
#include "Array_Maker.h"
#include "Quick_Sort.h"
#include <ctime>

int main() {

	const long long  size_of_data = 1'000'000;
	const int range = 1'000;
	vector<int> vec(size_of_data, 0);
	int start = clock();
	int end = clock();

	cout << endl;	
	cout << "Vector size: " << size_of_data << endl;
	cout << "Range: " << range << endl;
	cout << "randomized elements in range" << endl;
	cout << endl;


	Array_Maker array_maker;
	array_maker.randArray(vec, size_of_data, range);
	const vector<int> original_vec = vec;

	for(int i = 0; i < 3; i++) {

	cout << endl;
	cout << "Test # : " << i + 1 << endl;


	// Bubble Sort
	vec = original_vec;
	Bubble_Sort bubble_sort;
	start = clock();
	bubble_sort.sort(vec);
	end = clock();
	cout << endl;
	cout << "Bubble Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

	// Merge Sort
	vec = original_vec;
	Merge_Sort merge_sort;
	start = clock();
	merge_sort.sort(vec, 0, vec.size()-1);
	end = clock();
	cout << endl;
	cout << "Merge Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

	
	// Quick Sort
	Quick_Sort quick_sort;
	start = clock();
	quick_sort.sort(vec, 0, vec.size()-1, "median");
	end = clock();
	cout << endl;
	cout << "Quick_Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

	//Insertion Sort
	vec = original_vec;
	Insertion_Sort insertion_sort;
	start = clock();
	insertion_sort.sort(vec);
	end = clock();
	cout << endl;
	cout << "Insertion Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

	// Selection sort
	vec = original_vec;
	Selection_Sort selection_sort;
	start = clock();
	selection_sort.sort(vec);
	end = clock();
	cout << endl;
	cout << "Selection Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;
	
	
	//counting sort
	Counting_Sort counting_sort;
	start = clock();
	counting_sort.sort(vec);	
	end = clock();
	cout << endl;
	cout << "Counting Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

		
	// Radix Sort
	vec = original_vec;
	Radix_Sort radix_sort;
	start = clock();
	radix_sort.sort(vec);
	end = clock();
	cout << endl;
	cout << "Radix Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

	
	// Heap Sort
	vec = original_vec;
	Heap heap;
	start = clock();
	heap.buildMaxHeap(vec);
	heap.ascendingHeapSort(vec);
	end = clock();
	cout << endl;
	cout << "Heap Sort: " << double(end-start)/CLOCKS_PER_SEC << endl;

	}

	
	}
