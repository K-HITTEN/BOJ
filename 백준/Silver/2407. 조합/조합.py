import sys

input = sys.stdin.readline

n, m = map(int, input().split())
ret = 1
tmp = 1

for i in range(n, m, -1):
    ret *= i
    
for i in range(n-m,1,-1):
    tmp *= i
    
print(ret//tmp)