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
	for (long long i = 0; i < n; i++) arr.at(i) = rand() % range;

}

void Array_Maker::halfsortedArray(vector<int>& arr, long long n) 
{
	long long mid = n / 2;

	for (long long i = 0; i < mid; i++) arr.at(i) = i;


	for (long long i = mid + 1; i < n; i++) arr.at(i) = (rand() % 1000) + arr.at(i - 1);

}

void Array_Maker::sortedArray(vector<int>& arr, long long n) 
{
	for (long long i = 0; i < n; i++) arr.at(i) = i;

}


