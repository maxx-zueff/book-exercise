// Конвертатор

#include <iostream>
void convert(int);

int main()
{
    using namespace std;
    int height;

    cout << "Введите рост в дюймах: ___\b\b\b";
    cin >> height;
    convert (height);
    return 0;
}

void convert(int number)
{
    const unsigned int FACTOR = 12;
    
    unsigned int feet = number / FACTOR;
    unsigned int inches = number % FACTOR;
    
    std::cout << feet << " feet and " << inches << " inches" << std::endl;
}