#include <iostream>
#include <vector>
#include "Array_Maker.h"
#include <ctime>
using namespace std; 


Array_Maker::Array_Maker() {}
Array_Maker::~Array_Maker() {}

void Array_Maker::randArray(vector<int>& arr, const int range) {
	srand(time(0));
	for (long long i = 0; i < arr.size(); i++) arr.at(i) = rand() % (range + 1);

}

void Array_Maker::halfsortedArray(vector<int>& arr) {

	srand(time(0));
	int mid = arr.size() / 2;

	for (long long i = 0; i < mid; i++) arr.at(i) = i;

	for (long long i = mid; i < arr.size(); i++) arr.at(i) = (rand() %  (arr.size() + 1) ) + arr.size();

}

void Array_Maker::sortedArray(vector<int>& arr) {

	for (long long i = 0; i < arr.size(); i++) arr.at(i) = i;

}


void Array_Maker::reverseArray(vector<int>& arr) {

	int j = 0;

	for(long long i = arr.size() - 1; i >= 0; i--)  {
		arr.at(i) = j;
		j++;
	}	

}


