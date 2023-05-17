#include <iostream>
using namespace std;
const float GALLON_TO_LITRE = 3.875;
const float HKM_TO_MILE = 62.14;
int main() {
    float fuel_consume_eur, fuel_consume_us;
    cout << "Enter the fuel consume in europe: ";
    cin >> fuel_consume_eur;
    fuel_consume_us = HKM_TO_MILE / (fuel_consume_eur / GALLON_TO_LITRE);
    cout << "The fuel consume is " << fuel_consume_eur << "L/100KM." << endl;
    cout << "The fuel consume is " << fuel_consume_us << "mpg." << endl;

    return 0;
}