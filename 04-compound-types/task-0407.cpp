/* William Wingate runs a pizza-analysis service. For each pizza, he needs to
record the following information:

 - The name of the pizza company, which can consist of more than one word
 - The diameter of the pizza
 - The weight of the pizza

Devise a structure that can hold this information and write a program that
uses a structure variable of that type.The program should ask the user to
enter each of the preceding items of information,and then the program should
display that information. Use cin (or its methods) and cout. */

#include <iostream>

int main (void) {
	using namespace std;

	struct pizza {
		string company;
		float diameter;
		int weight;
	};

	pizza record;

	cout << "Type name of the pizza company: ";
	getline(cin, record.company);
	cout << "Type the diameter of the pizza: ";
	cin >> record.diameter;
	cout << "Type the weight of the pizza: ";
	cin >> record.weight;

	cout << "RESULT";
	cout << "company name: " << record.company << endl;
	cout << "diameter: " << record.diameter << endl;
	cout << "weight: " << record.weight << endl;
}