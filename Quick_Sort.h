#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Quick_Sort {

	Quick_Sort();
	~Quick_Sort();

	void sort(vector<int> &vec, int l, int r, string op ="none");

	int Partition(vector<int> &vec, int l, int r, string op="none");
};

