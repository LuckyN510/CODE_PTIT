P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    s = input()
    if s[0]=='0': break
    k, s = s.split()
    k = int(k)
    if k == 0: break
    res = ""
    for i in range(0, len(s)):
        res += P[(P.index(s[i]) + k) % 28]
    print(res[::-1])
