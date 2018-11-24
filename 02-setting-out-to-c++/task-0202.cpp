// Конвертатор

#include <iostream>
int convert(int);

int main(void)
{
    using namespace std;
    int dist;

    cout << "Введите растояние в фарлонгах: ";
    cin >> dist;
    cout << "Растояние в ядрах: " << convert(dist) << endl;

    return 0;
}

int convert(int dist)
{
    return dist * 220;
}