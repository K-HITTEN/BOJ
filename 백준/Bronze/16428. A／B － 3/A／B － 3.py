a, b = map(int, input().split())
c, d = a//b, a % b
if a != 0 and b < 0:
    print(c+1)
    print(a-(c+1)*b)
else:
    print(c)
    print(d)