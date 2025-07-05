n = int(input())
a = list(map(float, input().split()))
a.sort()
b = [x for x in a if x != a[0] and x != a[-1]]
print(f'{sum(b)/len(b):.2f}') 