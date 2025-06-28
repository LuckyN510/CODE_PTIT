if __name__ == '__main__':
    n = input()
    dem4, dem7 = 0, 0
    for c in n:
        if c == '4':
            dem4 += 1
        elif c == '7':
            dem7 += 1
    cnt = dem4 + dem7
    print("YES") if cnt == 4 or cnt == 7  else print("NO")