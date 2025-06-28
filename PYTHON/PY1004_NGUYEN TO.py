import math

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        dem = 0
        for i in range(1, n):
            if math.gcd(i, n) == 1:
                dem += 1
        print("YES") if isPrime(dem) else print("NO")