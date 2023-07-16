#include <iostream>
using namespace std;

void checkSum(int num1, int num2) {
	int check = 0;
	int result = num1 + num2;
	if (result < 100) {
		cout << "Comparing the value to 100" << endl;

		int check = 0;
		cout << result << " is less than 100" << endl;
	}
	if (result > 100) {

		int check = 1;
		cout << result << " is greater than 100" << endl;
	}
	if (result == 100) {

		int check = 2;
		cout << result << " is equal to 100" << endl;
	}
}

int main() {
	int num1, num2;
	cin >> num1;
	cin >> num2;
	checkSum(num1, num2);
	return 0;
}
