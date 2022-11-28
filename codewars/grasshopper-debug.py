def weather_info (temp):
	c = convert(temp)
	return "{} is {}freezing temperature".format(c, "above " if c > 0 else "")

def convert (fahrenheit):
	return (fahrenheit - 32) * (5 / 9)