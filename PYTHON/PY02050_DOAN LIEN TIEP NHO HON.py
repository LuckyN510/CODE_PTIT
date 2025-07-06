for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    res = []
    st = []
    for i in range(n):
        while st and a[i] >= a[st[-1]]:
            st.pop()
        if not st:
            res.append(i + 1)
        else:
            res.append(i - st[-1])
        st.append(i)
    for x in res:
        print(x, end=' ')
    print()