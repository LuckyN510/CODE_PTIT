from functools import cmp_to_key

def cmp(a, b):
    if a[1] == b[1]:
        return a[0] - b[0]
    else:
        return b[1] - a[1]

for _ in range(int(input())):
    n = int(input())
    a = []
    for _ in range(n):
        x = int(input())
        a.append(x)
    d = {}
    for x in a:
        d[x] = d.get(x, 0) + 1 
    b = list(d.items())
    b.sort(key = cmp_to_key(cmp))
    print(b[0][0])