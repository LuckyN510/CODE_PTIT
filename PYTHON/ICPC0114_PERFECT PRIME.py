import math

def isPrime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def check(n):
    if not isPrime(n):
        return False
    s = str(n)
    if s != s[::-1]: 
        return False
    tong = sum(int(i) for i in s)
    if not isPrime(tong): 
        return False
    if not all(isPrime(int(i)) for i in s):
        return False
    return True

if __name__ == '__main__':
    for _ in range(int(input())):
        n = int(input())
        print("Yes" if check(n) else "No")
