#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	int product = 1; // We can't set it to 0
	for(int iteration = 1; iteration <= input; iteration++) {
		product *= iteration;
	}

	cout << product << endl;
}
