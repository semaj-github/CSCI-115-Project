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

	const vector<long long>  size_of_data = {100, 1'000, 10'000, 100'000, 250'000, 1'000'000}; // data sizes
	const int range = 1'000; // range 
	const string vec_sort_type = "random"; // sorted type 
	auto start = clock(); // initializing start clock to reuse 
	auto end = clock(); // initializing end clock to reuse


	for (int j = 0; j < size_of_data.size(); j++) {

		vector<int> vec(size_of_data.at(j), 0); // initializing vec size with elements equal to zero
		Array_Maker array_maker; // initializing the array maker to create the range and size with passed in paramters

		cout << endl;	
		cout << "Vector size: " << size_of_data.at(j) << endl;
		cout << "Range: " << range << endl;
		cout << "sorted type: ";

		// chosen sorted type
		if(vec_sort_type == "random") {
			array_maker.randArray(vec, size_of_data.at(j), range);
			cout << "random"
		}
		else if(vec_sort_type == "reverse") {
			array_maker.reverseArray(vec, size_of_data.at(j));	
		}
		else if(vec_sort_type == "sorted") {
			array_maker.sortedArray(vec, size_of_data.at(j), range);
		}
		else if(vec_sort_type == "half sorted") {
			array_maker.halfsortedArray(vec, size_of_data.at(j), range);
		} 
		else {
			cout << "not a valid choice for sorted type" << endl;
			break;
		}

		const vector<int> original_vec = vec; // saving original vec to be tested for other sorting algorithms for fair testing

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
			double duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Bubble Sort: " << duration << endl; // 60sec * 60minutes * 24hours

			// Merge Sort
			vec = original_vec;
			Merge_Sort merge_sort;
			start = clock();
			merge_sort.sort(vec, 0, vec.size()-1);
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Merge Sort: " << duration << endl;


			// Quick Sort
			Quick_Sort quick_sort;
			start = clock();
			quick_sort.sort(vec, 0, vec.size()-1, "median");
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Quick_Sort: " << duration << endl;

			//Insertion Sort
			vec = original_vec;
			Insertion_Sort insertion_sort;
			start = clock();
			insertion_sort.sort(vec);
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Insertion Sort: " << duration << endl;

			// Selection sort
			vec = original_vec;
			Selection_Sort selection_sort;
			start = clock();
			selection_sort.sort(vec);
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Selection Sort: " << duration << endl;


			//counting sort
			Counting_Sort counting_sort;
			start = clock();
			counting_sort.sort(vec);	
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Counting Sort: " << duration  << endl;


			// Radix Sort
			vec = original_vec;
			Radix_Sort radix_sort;
			start = clock();
			radix_sort.sort(vec);
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Radix Sort: " << duration << endl;


			// Heap Sort
			vec = original_vec;
			Heap heap;
			start = clock();
			heap.buildMaxHeap(vec);
			heap.ascendingHeapSort(vec);
			end = clock();
			cout << endl;
			duration = static_cast<double>(end-start) / CLOCKS_PER_SEC;
			cout << "Heap Sort: " << duration << endl;

		}


		cout << "===========================================" << endl;	

	}
}

