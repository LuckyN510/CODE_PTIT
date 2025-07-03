for _ in range(int(input())):
    n, d = map(int, input().split())
    a = list(map(int, input().split()))
    rotated = a[d:] + a[:d]
    print(' '.join(map(str, rotated)))
