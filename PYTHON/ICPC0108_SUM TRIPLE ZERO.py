import bisect

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    dem = 0
    for i in range(0, min(200, len(a) - 2)):
        l, r, x = i + 1, len(a) - 1, a[i]
        while l < r:
            if x + a[l] + a[r] == 0:
                dem += 1
                l += 1
            elif x + a[l] + a[r] < 0:
                l += 1
            else :
                r -= 1
    print(dem)    