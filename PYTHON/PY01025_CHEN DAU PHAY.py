s = input()
res = [s[i:i+3] for i in range(0, len(s), 3)]
print(",".join(res))
