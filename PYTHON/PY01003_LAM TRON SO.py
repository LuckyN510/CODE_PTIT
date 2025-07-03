t = int(input())
for _ in range(t):
    a = [int(x) for x in input()]
    n = len(a)

    for i in range(n - 1, 0, -1):
        if a[i] >= 5:
            a[i - 1] += 1
        a[i] = 0

    if a[0] > 9:
        a[0] = 0
        a = [1] + a

    print("".join(map(str, a)))