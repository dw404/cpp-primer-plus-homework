#include <iostream>
using namespace std;

int main() {
    int degree, min, sec;
    cout << "Enter a latitude in degrees, minutes,and seconds" << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next,enter the minutes of arc:";
    cin >> min;
    cout << "Finally, enter the seconds of arc:";
    cin >> sec;
    double ans = 0;
    ans = degree + min / 60.0 + sec / 60.0 / 60.0;
    cout << degree << " degrees, "
        << min << " minutes, "
        << sec << " seconds = "
        << ans << " degrees";

    return 0;
}