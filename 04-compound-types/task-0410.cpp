/* Write a program that requests the user to enter three times for the 40-yd
dash (or 40-meter, if you prefer) and then displays the times and the average.
Use an array object to hold the data. (Use a built-in array if array is not
available.) */

#include <iostream>
#include <array>

int main() {

	using namespace std;

	array<float, 3> average;
	float total;

	for (int i = 0; i < 3; ++i) {
		cout << "Enter 40-yd dash: ";
		cin >> average[i];
	}

	cout << "Result:" << endl;
	for (int i = 0; i < 3; ++i) {
		cout << average[i] << " ";
		total = total + average[i];
	}

	cout << "Average: " << total/3;

	return 0;
}