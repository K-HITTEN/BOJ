import sys
input = sys.stdin.readline

for _ in range(3):
    n = int(input())
    ret = 0
    for i in range(n):
        ret += int(input())
    if(ret == 0):
        print('0')
    elif ret > 0:
        print('+')
    else:
        print('-')