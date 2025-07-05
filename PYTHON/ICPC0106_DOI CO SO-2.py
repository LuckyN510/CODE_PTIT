import math

def binTo(s, n):
    k = int(math.log(n, 2))
    while len(s) % k != 0:
        s = '0' + s
    res = ""
    for i in range(0, len(s), k):
        group = s[i : i + k]
        d = int(group, 2)
        if d <= 9:
            res += str(d)
        else :
            res += chr(ord('A') + d - 10)
    return res

if __name__ == '__main__':
    for _ in range(int(input())):
        n = int(input())
        s = input()
        if n == 2:
            print(s)
        elif n == 4 or n == 8 or n == 16:
            print(binTo(s, n))