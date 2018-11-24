// Program that asks you to enter an automobile gasoline consumption figure
// in the European style (liters per 100 kilometers) and converts to the U.S.
// style of miles per gallon.

#include <iostream>
double consumptionUSA (double);

int main (void) {
    using namespace std;

    double consumption;
    cout << "Type  automobile gasoline consumption in liters per 100 km: ";
    cin >> consumption;
    cout << "Your consumption = " << consumptionUSA(consumption)
            << " miles per gallon\n";
    
    return 0;
}

double consumptionUSA (double consumption) {
    using namespace std;

    const double mile_100km = 62.1371;
    const double gl_litr = 3.78541;
    return mile_100km / ( consumption / gl_litr );
}