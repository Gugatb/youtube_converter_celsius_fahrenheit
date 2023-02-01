ConsoleWrite("10 Celsius to Fahrenheit = " & Convert('C', 10) & @CRLF)
ConsoleWrite("50 Fahrenheit to Celsius = " & Convert('F', 50) & @CRLF)
ConsoleWrite("-40 Celsius to Fahrenheit = " & Convert('C', -40) & @CRLF)
ConsoleWrite("0 Fahrenheit to Celsius = " & Convert('F', 0) & @CRLF)

Func Convert($type, $value)
	return Round($type == 'C' ? ($value * 1.8) + 32 : ($value - 32) * 0.5556)
EndFunc