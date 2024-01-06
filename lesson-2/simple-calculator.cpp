#include <iostream>
using namespace std;

int main() {
	int number1, number2;
	char operation;
	cin >> number1 >> operation >> number2;

	int result;

	if(operation == '+') {
		result = number1 + number2;
	} else if(operation == '-') {
		result = number1 - number2;
	} else if(operation == '*') {
		result = number1 * number2;
	} else if(operation == '/') {
		if(number2 == 0) {
			cout << "You can't divide by zero!" << endl;
			result = 0;
		} else {
			result = number1 / number2;
		}
	} else {
		cout << "You entered an invalid operation." << endl;
		result = 0;
	}

	cout << result << endl;
}
