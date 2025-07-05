n = int(input())
a = list(map(int, input().split()))
a.sort()
b = []

if a[0] > 1:
    b.append(1)

for i in range(1, len(a)):
    if a[i] - a[i - 1] > 1:
        b.extend(range(a[i - 1] + 1, a[i]))
if b:
    print(b[0])
else:
    print(a[-1] + 1) 
