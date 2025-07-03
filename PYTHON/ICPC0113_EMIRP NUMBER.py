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
        res = []
        for i in range(10, n + 1):
            reversed_i = int(str(i)[::-1])
            if isPrime(i) and isPrime(reversed_i) and reversed_i < n and reversed_i != i:
               if reversed_i > i:
                    print(i, reversed_i, end = ' ')
        print()        