from functools import cmp_to_key

def tichCs(n):
    tong = 1
    while n != 0:
        tong *= n % 10
        n //= 10
    return tong

def cmp(a, b):
    if tichCs(a) != tichCs(b):
        return tichCs(a) - tichCs(b)
    else:
        return a - b

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(key=cmp_to_key(cmp))
    for x in a:
        print(x, end=' ')
    print()    
