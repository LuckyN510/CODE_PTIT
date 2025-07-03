import math

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

if __name__ == '__main__':
    for _ in range(int(input())):
        n = int(input())
        primes = []
        for i in range(2, n):
            if isPrime(i):
                primes.append(i)
        dem = 0
        for i in range(2, len(primes)):
            if (primes[i] - primes[i - 2] == 6) and (primes[i - 1] - primes[i - 2] == 2):
                dem += 1
            elif (primes[i] - primes[i - 2] == 6) and (primes[i - 1] - primes[i - 2] == 4):
                dem += 1
        print(dem)
