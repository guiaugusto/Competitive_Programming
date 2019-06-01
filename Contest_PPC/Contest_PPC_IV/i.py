a = input()
b = ""
c = 0;
a = a.split("WUB")

for x in a:
	if x != '':
		if c == 0:
			b = b + x
			c = c + 1
		else:
			b = b + " " + x

print(b)
