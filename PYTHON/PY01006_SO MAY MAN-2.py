def check(s):
    for c in s:
        if c != '4' and c != '7':
            return False
    return True

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        print("YES") if check(s) else print("NO")            