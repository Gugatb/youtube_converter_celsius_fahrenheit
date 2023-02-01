console.log("10 Celsius to Fahrenheit = " + convert('C', 10));
console.log("50 Fahrenheit to Celsius = " + convert('F', 50));
console.log("-40 Celsius to Fahrenheit = " + convert('C', -40));
console.log("0 Fahrenheit to Celsius = " + convert('F', 0));

function convert(type, value) {
	return Math.round(type == 'C' ? (value * 1.8) + 32 : (value - 32) * 0.5556);
}