#include <iostream>
using namespace std;

int main() {
	int number_1, number_2;
	cin >> number_1, number_2;

	if(number_1 == number_2) {
		cout << "The numbers are equal!";
	} else if(number_1 > number_2) {
		cout << "The first number is greater than the second number.";
	} else {
		cout << "The first number is lesser than the second number.";
	}
	
	cout << endl;
}
