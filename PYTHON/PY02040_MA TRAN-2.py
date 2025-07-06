n = int(input())
a = []
for i in range(n):
    b = list(map(int, input().split()))
    a.append(b)
k = int(input())

tongTren, tongDuoi = 0, 0
for i in range(n):
    for j in range(n):
        if i < n - j - 1:
            tongDuoi += a[i][j]
        elif i > n - j - 1:
            tongTren += a[i][j]

m = abs(tongTren - tongDuoi)
print("YES" if m <= k else "NO")
print(m)
