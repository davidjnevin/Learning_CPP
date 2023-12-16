#include <cmath>
#include <iostream>
int func(int number) {

 if (abs(number)/10 == 0) {
   return 1;
 }
 else {
   return 1 + func(number / 10);
 }
}
int main() {
		int number = 86250;
	std::cout << func(number);
}
