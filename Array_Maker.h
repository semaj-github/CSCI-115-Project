#include <iostream>
#include <vector>

using namespace std;

class Array_Maker {

	public:

		Array_Maker();
		~Array_Maker();

		void randArray(vector<int>& arr, long long n);

		void halfsortedArray(vector<int>& arr, long long n); 

		void sortedArray(vector<int>& arr, long long n);

		void reverseArray(vector<int>& arr, long long n);

};

