// Конвертер 4

#include <iostream>
int converter(double);
double x;

int main(void)
{
    using namespace std;
    
    cout << "Enter the number of light years: ";
    cin >> x;
    cout << x << " light years = " << converter(x) << " astronomical units." << endl;
    return 0;
}

int converter(double x)
{
    return x * 63240;
}