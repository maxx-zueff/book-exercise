// Request the current world population and the current population of the U.S..
// Have the program display the percent that the U.S. population is of the
// world’s population.

#include <iostream>
float getShare (float, float);

int main (void) {
    using namespace std;
    long world;
    long state;

    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of the US: ";
    cin >> state;
    cout << "The population of the US is " << getShare(state, world)
            << "% of the world population." << endl;
    return 0;
}

float getShare (float a, float b) {
    return a / b * 100;
}