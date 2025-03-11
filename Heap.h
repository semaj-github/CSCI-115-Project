#include <iostream>
#include <vector>

using namespace std;

class Heap {
	public:

		Heap();
		~Heap();

		void print(vector<int> vec);


		void modifyValMax (vector<int> &vec, int i, int val);



		void insert_value_maxHeap (vector<int> &vec, int val);

		void max_heapify2(vector<int> &vec, int i, int &n);
		void max_heapify(vector<int> &vec, int i);

		int extract_maximum (vector<int> &vec);


		void ascendingHeapSort(vector<int> &vec);


		void buildMaxHeap(vector<int> &vec); 



		
		//Min Heap
		void modifyValMin (vector<int> &vec, int i,int val);
								    
		void insert_value_minHeap (vector<int> &vec, int val);		


			
		//
									
		void min_heapify(vector<int> &vec, int i);

		void min_heapify2(vector<int> &vec, int i, int &n);

		int extract_minimum (vector<int> &vec);



		void descendingHeapSort(vector<int> &vec); //Prints the array in descending order
		void buildMinHeap(vector<int> &vec); //Heapifies entire list
		 
};
