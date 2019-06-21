from sys import stdin

def fat(n):
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return n * fat(n-1)

entry = stdin.read().splitlines()

for i in entry:
    i = i.split(' ')
    values = [int(a) for a in i]

    sum = 0

    for v in values:
        sum += fat(v)

    print(sum)
