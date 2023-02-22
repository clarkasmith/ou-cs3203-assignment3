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

vector<int> Reverse(vector<int> vec) {

	vector<int> reversed_vec;

	for (int i = 0; i < vec.size(); i++) {
		reversed_vec.push_back(vec.at(vec.size() - 1 - i));
	}

	return reversed_vec;
}

int main() {
	vector<int> vec;
	int x;
	while (cin >> x) {
		vec.push_back(x);
	}

	int sum, product;

	sum = SumArray(vec);
	product = ProductArray(vec);

	cout << "The sum of these numbers is: " << sum << endl;
	cout << "The product of these numbers is: " << product << endl;

	vector<int> reversed_vec = Reverse(vec);

	cout << "Reversed List: " << endl;

	for (int i = 0; i < reversed_vec.size(); i++) {
		cout << reversed_vec.at(i) << " ";
	}
}