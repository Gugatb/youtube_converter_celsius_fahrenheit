#include <math.h>
#include <stdio.h>

int convert(char, int);

int main() {
	printf("10 Celsius to Fahrenheit = %d\n", convert('C', 10));
	printf("50 Fahrenheit to Celsius = %d\n", convert('F', 50));
	printf("-40 Celsius to Fahrenheit = %d\n", convert('C', -40));
	printf("0 Fahrenheit to Celsius = %d\n", convert('F', 0));
}

int convert(char type, int value) {
	return round(type == 'C' ? (value * 1.8f) + 32 : (value - 32) * 0.5556);
}