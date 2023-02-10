#include <cmath>
#include <iostream>

int convert(char, int);

int main() {
	std::cout << "10 Celsius to Fahrenheit = " << convert('C', 10) << std::endl;
	std::cout << "50 Fahrenheit to Celsius = " << convert('F', 50) << std::endl;
	std::cout << "-40 Celsius to Fahrenheit = " << convert('C', -40) << std::endl;
	std::cout << "0 Fahrenheit to Celsius = " << convert('F', 0) << std::endl;
}

int convert(char type, int value) {
	return round(type == 'C' ? (value * 1.8f) + 32 : (value - 32) * 0.5556f);
}