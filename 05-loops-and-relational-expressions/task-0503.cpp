/* Write a program that asks the user to type in numbers.After each entry, the
program should report the cumulative sum of the entries to date.The program
should terminate when the user enters 0. */

#include <iostream>
void sumNum(int&, int&);

int main() {
	int num;
	int i;

	sumNum(num, i);
	while (i != 0) {
		sumNum(num, i);
	}


	return 0;
}

void sumNum(int &num, int &i) {
	std::cout << "\nType the number: ";
	std::cin >> i;
	num = num + i;
	std::cout << "Cumulative sum: " << num << std::endl;
}