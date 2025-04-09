#include <iostream>
#include <vector>

using namespace std;

class Array_Maker {

	public:

		Array_Maker();
		~Array_Maker();

		void randArray(vector<int>& arr, const long long n, const int range);

		void halfsortedArray(vector<int>& arr, long long n, const int range); 
		void sortedArray(vector<int>& arr, long long n,  const int range);

		void reverseArray(vector<int>& arr, long long n);

};

