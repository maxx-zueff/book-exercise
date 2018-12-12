/* Write a program that requests the user to enter two integers. The program
should then calculate and report the sum of all the integers between and
including the two integers. At this point,assume that the smaller integer is
entered first. For example, if the user enters 2 and 9, the program should
report that the sum of all the integers from 2 through 9 is 44. */

#include <iostream>
#include <string>

int main (void) {

	using namespace std;

	int numbers[2];
	int total;
	string output = "Numbers: ";

	cout << "Type number: ";
	cin >> numbers[0];
	cout << "Type bigger number: ";
	cin >> numbers[1];

	for (int i = numbers[0]; i <= numbers[1]; i++) {
		total = total + i;
		output = output + to_string(i) + " ";
	}

	cout << output << endl;
	cout << "Total: " << total << endl;

}