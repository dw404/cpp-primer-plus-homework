#include <iostream>
using namespace std;
const int FOOT_TO_INCH = 12;
const double INCH_TO_M = 0.0254;
const double KG_TO_P = 2.2;
int main() {
    int foot = 0, inch = 0;
    double p = 0;
    cout << "Foot: ";
    cin >> foot;
    cout << "Inch: ";
    cin >> inch;
    cout << "weight: ";
    cin >> p;
    double m = 0;
    m = (foot * FOOT_TO_INCH + inch) * INCH_TO_M;
    double kg = 0;
    kg = p / KG_TO_P;
    cout << "BMI is " << kg / (m * m);

    return 0;
}