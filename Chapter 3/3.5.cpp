#include <iostream>
using namespace std;

int main() {
    long long global, ch;
    double per;
    cout << "Enter the world's population: ";
    cin >> global;
    cout << "Enter the population of the China: ";
    cin >> ch;
    per = 100 * (double)ch / (double)global;
    cout << "The population of the China is " << per << "% of the world population.";

    return 0;
}