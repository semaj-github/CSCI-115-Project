#include <iostream>
#include <vector>
#include <cstdlib>  
#include <ctime>    
#include <unordered_set>

using namespace std;

void insertionSort(vector<int>& arr) {
	for (int i = 1; i < arr.size(); i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int partition(vector<int>& arr, int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void quickSort_caller(vector<int>& arr, int low, int high) {
	quickSort(arr, low, high);
}


void sorting(vector<int>& arr) {
	int z = 0;
	float percent;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr.at(i) < arr.at(i + 1)) {
			z++;
		}
	}
	percent = static_cast<float>(z) / arr.size();

	if (percent > 0.9) {
		insertionSort(arr);
	} else {
		quickSort_caller(arr, 0, arr.size() - 1);
	}
}

void sum(vector<int>& arr) {
	vector<pair<int, int>> pairs;

	sorting(arr);

	cout << "Enter number to find the pairs: ";
	int input;
	cin >> input;

	int i = 0;
	int j = arr.size() - 1;

	while (i < j) {
		int sum_val = arr.at(i) + arr.at(j);
		if (sum_val == input) {
			pairs.push_back(make_pair(arr.at(i), arr.at(j)));
			i++;
			j--;
		} else if (sum_val < input) {
			i++;
		} else {
			j--;
		}
	}

	if (pairs.empty()) {
		cout << "No pairs found.\n";
	} else {
		cout << "Pairs found:\n";
		for (auto p : pairs) {
			cout << p.first << ", " << p.second << endl;
		}
	}
}

void randArray(vector<int>& arr, int size) {
	srand(static_cast<unsigned int>(time(0)));  
	for (int i = 0; i < size; i++) {
		arr.push_back(rand() % 1000); 
	}
}

vector<pair<int,int>> inefficient_TwoSum(const vector<int> &vec, const int target) {

	vector<pair<int,int>> result;

	for(int i = 0; i < vec.size(); i++) {
		for(int j = i+1; j < vec.size(); j++) {
			if(vec.at(i) + vec.at(j) == target) result.push_back(make_pair(vec.at(i),vec.at(j)));
		}

	}

	return result;


}

vector<pair<int,int>> efficient_TwoSum(const vector<int> &vec, const int target) {

	unordered_set<int> ht;
	vector<pair<int,int>> result;

	for(int i = 0; i < vec.size(); i++) {
		int difference = 0;

		if( vec.at(i) >= target ) difference = vec.at(i) - target;
		else difference = target - vec.at(i);

		if(ht.count(difference)) result.push_back(make_pair(vec.at(i), difference));
		
		ht.insert(vec.at(i));

	}

	return result;


}

int main() {
	//vector<int> array;

	//randArray(array, 1000);

	//sum(array);

	vector<int> test = {10, 3, 5, 12, 20, 9, 8, 7, 29, 10, 6};
	vector<pair<int,int>> result = efficient_TwoSum(test, 15);

	for(auto p : result) cout << p.first << " " << p.second << endl;

	return 0;
}
