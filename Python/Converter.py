def convert(type, value):
	if type == 'C':
		return round((value * 1.8) + 32)
	else:
		return round((value - 32) * 0.5556)

if __name__ == "__main__":
    print("10 Celsius to Fahrenheit = " + str(convert('C', 10)))
    print("50 Fahrenheit to Celsius = " + str(convert('F', 50)))
    print("-40 Celsius to Fahrenheit = " + str(convert('C', -40)))
    print("0 Fahrenheit to Celsius = " + str(convert('F', 0)))