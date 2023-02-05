def convert(type, value)
	return (type == 'C' ? (value * 1.8) + 32 : (value - 32) * 0.5556).round
end

puts '10 Celsius to Fahrenheit = ' + convert('C', 10).to_s
puts '50 Fahrenheit to Celsius = ' + convert('F', 50).to_s
puts '-40 Celsius to Fahrenheit = ' + convert('C', -40).to_s
puts '0 Fahrenheit to Celsius = ' + convert('F', 0).to_s