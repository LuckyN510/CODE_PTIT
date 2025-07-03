def distance(a, b):
    return abs(ord(a) - ord(b))

if __name__ == '__main__':
    for t in range(int(input())):
        s1 = input()
        s2 = s1[::-1]
        check = True
        for i in range(0, len(s1)):
            if distance(s1[i], s1[i - 1]) != distance(s2[i], s2[i - 1]):
                check = False
                break
        print("YES") if check else print("NO")       