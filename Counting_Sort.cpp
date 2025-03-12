#include <iostream>
#include <vector>
#include "Counting_Sort.h"

using namespace std;

	
	Counting_Sort::Counting_Sort() {}
	Counting_Sort::~Counting_Sort() {}


	void Counting_Sort::sort(vector<int> &vec) {

		int max = vec.at(0);

		// getting max number
		for(int i = 1; i < vec.size(); i++) {
			if(vec.at(i) > max) max = vec.at(i);
		}

		//intializing the vector for amount of times each integer was seen
		vector<int> count(max + 1, 0);
		for(int i = 0; i < vec.size(); i++) {
			count.at(vec.at(i))++;		
		}

		// summing up the current integer count with the one previously before
		for(int i = 1; i < count.size(); i++) {
			count.at(i) = count.at(i) + count.at(i-1);
		}


		vector<int> output(vec.size(), 0);

		for(int i = vec.size() - 1; i >= 0; i--) {

			int cur_num = vec.at(i);
			count.at(cur_num)--;
			int out_cur = count.at(cur_num);
			output.at(out_cur) = cur_num;

		}

		vec = output;

		//for(int x : output) cout << x << ", ";


	}


