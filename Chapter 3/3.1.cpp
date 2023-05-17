#include <iostream>
using namespace std;
const int u = 12;
int main() {
    cout << "Enter:_";
    int h = 0;
    cin >> h;
    cout << "Height is " << h / u << " foot and " << h % u << " inch";

    return 0;
}