// Working with compound types (char array). Accepting first names that
// comprise more than one word. Adjusting the grade downward.

#include <iostream>
// #include <cstring>
const int SIZE = 15;
char firstName[SIZE];
char lastName[SIZE];
char grade;
int  age;

int main (void) {
    using namespace std;
    
    cout << "What is your first name? ";
    cin.getline(firstName, SIZE);
    cout << "What is your last name? ";
    cin.getline(lastName, SIZE);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade++;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << firstName << ", " << lastName << endl;
    cout << "Grade: " <<  (char) grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}