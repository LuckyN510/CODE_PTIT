def convert(s, p, q):
    return int(s.replace(str(p), str(q)))

for _ in range(int(input())):
    p, q = map(int, input().split())
    parts = input().split()
    if len(parts) == 2:
        x1, x2 = parts
    else:
        x1 = parts[0]
        x2 = input().strip()
    sum1 = convert(x1, p, q) + convert(x2, p, q)
    sum2 = convert(x1, q, p) + convert(x2, q, p)
    print(min(sum1, sum2), max(sum1, sum2))
