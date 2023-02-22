#include <iostream>
#include <vector>
using namespace std;

int SumArray(vector<int> vec) {

	int sum = 0;

	for (int i = 0; i < vec.size(); i++) {
		sum += vec.at(i);
	}

	return sum;
}

int ProductArray(vector<int> vec) {

	int product = 1;

	for (int i = 0; i < vec.size(); i++) {
		product *= vec.at(i);
	}

	return product;
}