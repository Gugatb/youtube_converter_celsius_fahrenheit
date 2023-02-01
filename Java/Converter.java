package Java;

public class Converter {
	public static void main(String[] args) {
		System.out.println("10 Celsius to Fahrenheit = " + convert('C', 10));
		System.out.println("50 Fahrenheit to Celsius = " + convert('F', 50));
		System.out.println("-40 Celsius to Fahrenheit = " + convert('C', -40));
		System.out.println("0 Fahrenheit to Celsius = " + convert('F', 0));
	}

	public static int convert(char type, int value) {
		return Math.round(type == 'C' ? (value * 1.8f) + 32 : (value - 32) * 0.5556f);
	}
}