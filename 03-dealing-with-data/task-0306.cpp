// Reports the miles per gallon

#include <iostream>
float getShare (float, float);

int main (void) {
    using namespace std;
    int miles;
    int gallons;
    
    cout << "How many miles you have driven?" << endl;
    cin >> miles;
    cout << "How many gallons of gasoline you have used?" << endl;
    cin >> gallons;
    cout << getShare(miles, gallons);
    cout << " miles per gallon your car has gotten" << endl;

    return 0;
}

float getShare (float a, float b) {
    return a / b;
}