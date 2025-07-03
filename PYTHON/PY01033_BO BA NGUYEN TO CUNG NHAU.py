import math

l, r = map(int, input().split())
a = []
res = []
for i in range(l, r + 1):
    for j in range(i + 1, r + 1):
        for k in range(j + 1, r + 1):
            if(math.gcd(i, j) == 1 and math.gcd(j, k) == 1 and math.gcd(k, i) == 1):
                res.append([i, j, k])
    
res.sort()
for it in res:
    print(f'({it[0]}, {it[1]}, {it[2]})')