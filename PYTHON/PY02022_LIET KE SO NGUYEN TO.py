import math

def isPrime(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return n > 1

n = int(input())
a = list(map(int, input().split()))
d = {}
for x in a:
    if isPrime(x):
        d[x] = d.get(x, 0) + 1
for val, fre in d.items():
    print(val, fre)