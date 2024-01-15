#include <iostream>
using namespace std;

int main() {
	int integer_to_guess;

	cout << "Enter the integer to guess: ";
	cin >> integer_to_guess;

	int guess;

	cin >> guess;
	
	while(guess != integer_to_guess) {
		if(guess > integer_to_guess) {
			cout << "You guessed too high. Please guess again: ";
		} else {
			cout << "You guessed too low. Please guess again: ";
		}
	
		cin >> guess;
	}
	
	cout << "You got it!" << endl;
}
