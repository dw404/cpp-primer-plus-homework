#include<iostream>
double transfer(double );
int main()
{
	std::cout << "Please enter a Celsius value: ";
	double x;
	std::cin >> x;
	std::cout << x << " degrees Celsius is " << transfer(x) << " degrees Fahrenheit.";
	return 0;
}
double transfer(double x) {
	return x * 1.8 + 32.0;
}