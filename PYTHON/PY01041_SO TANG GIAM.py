def check(n):
    i = 0
    if len(n) < 3:
        return False
    while(i < len(n) - 1) and (n[i] < n[i + 1]):
        i += 1
    while(i < len(n) - 1) and (n[i] > n[i + 1]):
        i += 1
    return i == len(n) - 1
    

for _ in range(int(input())):
    n = input()
    print("YES") if check(n) else print("NO")