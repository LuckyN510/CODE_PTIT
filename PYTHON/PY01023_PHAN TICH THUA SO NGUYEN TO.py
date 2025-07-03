import math

def prime_factors(n):
    res = []
    res.append("1")
    for i in range(2, math.isqrt(n) + 1):
        count = 0
        while n % i == 0:
            count += 1
            n //= i
        if count > 0:
            res.append(f"{i}^{count}")
    if n > 1:
        res.append(f"{n}^1")
    return ' * '.join(res)

if __name__ == '__main__':
    for _ in range(int(input())):
        n = int(input())
        print(prime_factors(n))
