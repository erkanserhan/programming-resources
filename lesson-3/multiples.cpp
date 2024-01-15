#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	for(int multiple = B; multiple < A; multiple += B) {
		cout << multiple << endl;
	}
}
