// Расчёт индекса массы тела

#include <iostream>
int calculateBMI(int, int, int);
float sqrt(float);

int main (void) {

    using namespace std;
    int feet;
    int inch;
    int pound;

    cout << "Введите рост в футах и дюймах." << endl;
    cout << "Футы: _\b";
    cin >> feet;
    cout << "Дюймы: __\b\b";
    cin >> inch;
    cout << "Введите вес в фунтах: ___\b\b\b";
    cin >> pound;
    cout << "Индекс Массы Тела составляет: ";
    cout << calculateBMI(feet, inch, pound) << endl;

    return 0;
}

int calculateBMI(int feet, int inch, int pound) {
    
    const int FEET_TO_INCH = 12;
    const float INCH_TO_METRE = 0.0254;
    const float KG_TO_POUND = 2.2;
    float metre;
    float kg;

    inch = inch + FEET_TO_INCH * feet;
    metre = inch * INCH_TO_METRE;
    kg = pound / KG_TO_POUND;

    // std::cout << metre << " " << sqrt(metre) << " " << kg  << std::endl;
    return kg / sqrt(metre);
}

float sqrt (float x) {
    return x * x;
}