// Appending for string objects and character arrays using
// C library (cstring)

#include <iostream>
#include <cstring>

int main (void) {
    
    using namespace std;
    const int SIZE = 10;
    char fName[SIZE];
    char lName[SIZE];
    char fullName[SIZE * 2 + 2];

    cout << "Enter your first name: ";
    cin.getline(fName, SIZE);
    cout << "Enter your last name: ";
    cin.getline(lName, SIZE);

    strcpy(fullName, fName);
    strcat(fullName, ", ");
    strcat(fullName, lName);

    cout << "Here's the information in a single string: " << fullName << endl;
    
    return 0;
}