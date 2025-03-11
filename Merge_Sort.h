#include <iostream>
#include <vector>

using namespace std;

class Merge_Sort {

	public:

	
	Merge_Sort();
	~Merge_Sort();



	void merge(vector<int> &vec, int start, int mid, int end);

	vector<int> sort(vector<int>&vec, int start, int end);

};
