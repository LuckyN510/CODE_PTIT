import math

d = {}
for _ in range(int(input())):
    n = input().split()
    if d[n] != 0:
        d[n] = 1
print(len(d))