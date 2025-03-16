#include <iostream>
#include <vector>
#include "Array_Maker.h"

using namespace std; 


Array_Maker::Array_Maker() {}
Array_Maker::~Array_Maker() {}

void Array_Maker::randArray(vector<int>& arr, int n) 
{
	arr.resize(n);
	for (int i = 0; i < n; i++) arr.at(i) = rand() % 1000;

}

void Array_Maker::halfsortedArray(vector<int>& arr, int n) 
{
	arr.resize(n);
	int mid = n / 2;

	for (int i = 0; i < mid; i++) arr.at(i) = i;

	arr.at(mid) = mid;

	for (int i = mid + 1; i < n; i++) arr.at(i) = (rand() % 1000) + arr.at(i - 1);

}

void Array_Maker::sortedArray(vector<int>& arr, int n) 
{
	arr.resize(n);
	for (int i = 0; i < n; i++) arr.at(i) = i;

}


