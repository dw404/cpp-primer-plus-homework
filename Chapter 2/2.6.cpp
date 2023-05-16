#include<iostream>
double convert(double x) {
	return x * 63240;
}
int main() {
	std::cout << "Enter the number of light years: ";
	double x;
	std::cin >> x;
	std::cout << x << " light years = " << convert(x) << " astronomical units.";
	return 0;
}