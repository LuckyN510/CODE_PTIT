import math

def isPrime(n):
    if(n < 2):
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True
    
def check(n):
    return isPrime(sum(int(i) for i in str(n)))

if __name__ == '__main__':
    for t in range(int(input())):
        n, m = map(int, input().split())
        print("YES") if(check(math.gcd(n, m))) else print("NO")