def check(s):
    if len(set(s)) != 2:
        return False
    for i in range(len(s) - 2):
        if s[i] != s[i + 2]:
            return False
    return True

for _ in range(int(input())):
    s = input()
    print("YES" if check(s) else "NO")
