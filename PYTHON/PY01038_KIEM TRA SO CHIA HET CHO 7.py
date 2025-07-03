for _ in range(int(input())):
    n = input()
    while True:
        if int(n) % 7 == 0:
            print(n)
            break
        n =str( int(n) + int(n[::-1]))
