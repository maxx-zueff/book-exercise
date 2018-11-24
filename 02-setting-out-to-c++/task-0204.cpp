// Конвертер 2

#include <iostream>
void convert(int x);
int age;

int main(void)
{
    using namespace std;
    cout << "Enter your age: ";
    cin >> age;
    convert(age);
    return 0;
}

void convert(int x)
{
    using namespace std;
    cout << "Your age in month is " << x * 12 << endl;
}