/* Do Programming Exercise 7 but use [new] to allocate a structure instead of
declaring a structure variable. Also have the program request the pizza
diameter before it requests the pizza company name. */

#include <iostream>
#include <string>

struct pizza {
	float diameter;
	std::string company;
	int weight;
};

int main (void) {
	using namespace std;
	pizza *free = new pizza;

	cout << "Enter the diameter of the pizza: ";
	cin >> (*free).diameter;
	cout << "Enter name of the pizza company: ";
	cin.ignore();
	getline(cin, free->company);
	cout << "Enter the weight of the pizza: ";
	cin >> (*free).weight;

	cout << "RESULT" << endl;
	cout << "diameter: " << (*free).diameter << endl;
	cout << "company name: " << (*free).company << endl;
	cout << "weight: " << (*free).weight << endl;
	delete free;

	return 0;
}