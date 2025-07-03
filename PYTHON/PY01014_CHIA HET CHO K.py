if __name__ == '__main__':
    a, k, n = map(int, input().split())
    res = []
    for i in range(0, n + 1, k):
        if i > a :
            res.append(i - a)
    if not res:
        print("-1")
    else:
        for it in res:
            print(it, end=" ")