s = input()
print(s.upper() if sum(c.isupper() for c in s ) > sum(c.islower() for c in s) else s.lower())