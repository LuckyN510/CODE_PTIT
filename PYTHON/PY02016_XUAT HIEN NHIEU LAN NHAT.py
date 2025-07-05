for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    d = {}
    for x in a:
        d[x] = d.get(x, 0) + 1
    k = n // 2
    maxn_fre, max_val = 0, 0
    for val, fre in d.items():
        if fre > max_val:
            if(fre > k):
                max_val = val
    print(max_val) if (max_val != 0) else print("NO") 