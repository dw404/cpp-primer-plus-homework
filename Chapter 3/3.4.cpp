#include <iostream>
using namespace std;
const int DAY_HOURS = 24;
const int HOUR_MIN = 60;
const int MIN_SEC = 60;
int main() {
    long long sec = 0;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    int min = sec / MIN_SEC;
    int hour = min / HOUR_MIN;
    int day = hour / DAY_HOURS;
    cout << sec << " seconds = " << day << " days, " << hour % DAY_HOURS << " hours, " << min % HOUR_MIN << " minutes, " << sec % MIN_SEC << " seconds";

    return 0;
}