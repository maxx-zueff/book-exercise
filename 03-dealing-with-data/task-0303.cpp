// Конвертер

#include <iostream>

float converter (float, float, float);

int main(void) {
    using namespace std;
    int degrees;
    int minutes;
    int seconds;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, ";
    cout << minutes << " minutes, ";
    cout << seconds << " seconds = ";
    cout << converter(degrees, minutes, seconds);
    cout << " degrees" << endl;

    return 0;
}

float converter (float degrees, float minutes, float seconds) {
    const int MINUTES_IN_DEGRE = 60;
    const int SECONDS_IN_MINUTE = 60;

    minutes = minutes / MINUTES_IN_DEGRE;
    seconds = seconds / SECONDS_IN_MINUTE / MINUTES_IN_DEGRE;

    return degrees + minutes + seconds;
}