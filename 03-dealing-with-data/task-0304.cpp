// Конвертер

#include <iostream>
#include <string>
std::string convert(long);

int main (void) {

    using namespace std;
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    
    cout << to_string(seconds) + " seconds = " << convert(seconds) << endl;
    return 0;
}

std::string convert(long sec) {
    const int SEC_IN_MIN = 60;
    const int MIN_IN_HOURS = 60;
    const int HOURS_IN_DAY = 24;

    int seconds = sec % SEC_IN_MIN;
    int minutes = sec / SEC_IN_MIN;
    int hours = minutes / MIN_IN_HOURS;
        minutes = minutes % MIN_IN_HOURS;
    int days = hours / HOURS_IN_DAY;
        hours = hours % HOURS_IN_DAY;

    std::string str = std::to_string(days) + " days, " + std::to_string(hours)
        + " hours, " + std::to_string(minutes) + " minutes, "
        + std::to_string(seconds) + " seconds";

    return str;
}