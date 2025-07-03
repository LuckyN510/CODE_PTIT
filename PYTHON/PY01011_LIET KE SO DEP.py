def check(n):
    s = str(n)
    for c in s:
        if int(c) % 2 != 0:
            return False
    if s != s[::-1]:
        return False
    if len(s) % 2 != 0:
        return False
    return True

if __name__ == '__main__':
    for t in range(int(input())):
        res = []
        n = int(input())
        for i in range(22, n, 2):
            if check(i):
                res.append(str(i))
        print(" ".join(res))