// Конвертер 3

#include <iostream>
int converter (int x);
int degree;

int main(void)
{
    using namespace std;

    cout << "Please enter a Celsius value: ";
    cin >> degree;
    cout << degree << " degrees Celsius is " << converter(degree) << " degrees Fahrenheit." << endl;
    return 0;
}

int converter(int x)
{
    return 1.8 * x + 32;
}