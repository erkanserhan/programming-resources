#include <iostream>
using namespace std;

int main() {
	cout << "How many numbers do you want to add together? ";
	int numbers_to_add;
	cin >> numbers_to_add;

	int sum = 0;

	for(int count = 0; count < numbers_to_add; count++) {
		int input;
		cin >> input;
		sum += input;
	}
	
	cout << "The sum is " << sum << endl;
}
