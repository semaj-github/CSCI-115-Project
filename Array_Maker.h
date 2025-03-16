#include <iostream>
#include <vector>

using namespace std;

class Array_Maker {

	public:

		Array_Maker();
		~Array_Maker();

		void randArray(vector<int>& arr, int n);

		void halfsortedArray(vector<int>& arr, int n); 

		void sortedArray(vector<int>& arr, int n);

		void reverseArray(vector<int>& arr, int n);

};

