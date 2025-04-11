#include <iostream>
#include <vector>

using namespace std;

class Array_Maker {

	public:

		Array_Maker();
		~Array_Maker();

		void randArray(vector<int>& arr, const int range);

		void halfsortedArray(vector<int>& arr); 
		void sortedArray(vector<int>& arr);

		void reverseArray(vector<int>& arr);

};

