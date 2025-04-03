#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Quick_Sort.h"
using namespace std;


	Quick_Sort::Quick_Sort() {}
	Quick_Sort::~Quick_Sort() {}

	void Quick_Sort::sort(vector<int> &vec, long long l, long long r, string op) {

		if(l < r) {

			long long q = Partition(vec, l, r, op);
			sort(vec, l, q, op);
			sort(vec, q + 1, r, op);

		}

	}

	long long Quick_Sort::Partition(vector<int> &vec, long long l, long long r, string op) {

		long long pivot = -1;


		if(op == "low") {
			pivot = vec.at(l);
			//cout << "choosen low" << endl;

		} else if(op == "median") { 

			long long begin = vec.at(l);
			long long end = vec.at(r);
			long long mid = vec.at((l+r)/2);
			//cout << "choosen median" << endl;
			if ( (begin <= mid && mid <= end) || (mid >= end && mid <= begin) ) pivot = vec.at((l+r)/2);
			else if (mid <= begin && begin <= end || (mid >= end  && begin >= end) ) pivot = vec.at(l);
			else pivot = vec.at(r);
			//cout << "begin is at " << l << " with the value of " << vec.at(l) << endl;
			//cout << "mid is at " << (l+r)/2 <<  " with the value of " << vec.at((l+r)/2) << endl;
			//out << "end is at " << r <<  " with the value of " << vec.at(r) << endl;
			//cout << "pivot is " << pivot << endl << endl;

		}   else {

			//cout << "choosen random" << endl;
			long long pivot_number = rand() % (r-l+1) + l;
			//cout << "pivot number = " << pivot_number << endl;
			//cout << "l = " << l << endl;
			//cout << "r = " << r << endl;
			pivot = vec.at(pivot_number);
		} 


		long long i = l-1;
		long long j = r+1;

		while(1) {

			do {
				j--;
			} while ( vec.at(j) > pivot);

			do {
				i++;
			} while( vec.at(i) < pivot);


			if(i < j) {

				long long temp = vec.at(i);
				vec.at(i) = vec.at(j);
				vec.at(j) = temp;

			} else {

				return j;
			}
		}


	}



