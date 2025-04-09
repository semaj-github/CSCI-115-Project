#include <iostream>
#include <vector>
#include "Array_Maker.h"
#include <ctime>
using namespace std; 


Array_Maker::Array_Maker() {}
Array_Maker::~Array_Maker() {}

void Array_Maker::randArray(vector<int>& arr, const long long n, const int range) 
{
	srand(time(0));
	for (long long i = 0; i < n; i++) arr.at(i) = rand() % (range + 1);

}

void Array_Maker::halfsortedArray(vector<int>& arr, long long n, const int range) 
{
	long long mid = n / 2;
	srand(time(0));

	for (long long i = 0; i < mid; i++) arr.at(i) = i;


	for (long long i = mid; i < n; i++) arr.at(i) = (rand() % (range + 1)) + arr.at(i - 1);

}

void Array_Maker::sortedArray(vector<int>& arr, long long n, const int range) 
{
	for (long long i = 0; i < n; i++) arr.at(i) = i;

}


void Array_Maker::reverseArray(vector<int>& arr, long long n) {
	
	int j = 0;

	for(long long i = n - 1; i >= 0; i--)  {
		arr.at(i) = j;
		j++;
	}	

}


