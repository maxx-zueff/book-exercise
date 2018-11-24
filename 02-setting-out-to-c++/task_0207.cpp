// Часы

#include <iostream>
void time(int, int);

int main()
{
    using namespace std;
    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    time(hours, minutes);
    return 0;
}

void time(int hours, int minutes)
{
    using namespace std;
    cout << "Time: " << hours << ":" << minutes << endl;
}