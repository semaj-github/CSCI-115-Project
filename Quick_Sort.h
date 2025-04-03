#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Quick_Sort {

	Quick_Sort();
	~Quick_Sort();

	void sort(vector<int> &vec, long long l, long long r, string op ="none");

	long long Partition(vector<int> &vec, long long l, long long r, string op="none");
};

