def cnt(a):
    if a[0] == a[1] == a[2] == a[3]:
        return 0
    new_a = []
    for i in range(4):
        new_a.append(abs(a[i] - a[(i + 1) % 4]))
    return cnt(new_a) + 1

while True:
    a = [int(x) for x in input().split()]
    if a == [0, 0, 0, 0]:
        break
    print(cnt(a))
    
