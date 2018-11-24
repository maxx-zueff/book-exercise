// Appending for string objects and methods from the string header file

#include <iostream>
#include <string>

int main (void) {
    using namespace std;

    string firstName;
    string lastName;
    string fullName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    fullName = firstName + ", " + lastName;

    cout << "Here's the information in a single string: " << fullName << endl;

}