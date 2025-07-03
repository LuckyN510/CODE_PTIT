def check(n):
    tong = sum(int(i) for i in str(n))
    if tong % 10 != 0:
        return False
    for i in range(1, len(n)):
        if abs(int(n[i - 1]) - int(n[i])) != 2:
            return False
    return True    

if __name__ == '__main__':
    for t in range(int(input())):
        n = input()
        print("YES") if check(n) else print("NO")