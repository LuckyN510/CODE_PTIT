import math

for t in range (int(input())):
    n = input()
    m = n[::-1]
    print("YES") if math.gcd(int(m), int(n)) == 1 else print("NO")