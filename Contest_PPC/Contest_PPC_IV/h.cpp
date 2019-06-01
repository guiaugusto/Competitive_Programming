a = input()
c = input()

c = c.split(" ")
c = list(map(int, c))
c.sort(reverse = True)

a = int(a)
v = a
aux = 0
suM = 0

for x in c:
	if suM >= a:
		break;
	if x != 0:
		aux = aux + 1
		suM = suM + x
		v = v - x

if suM < a:
	print(-1)
else:
	print(aux)
