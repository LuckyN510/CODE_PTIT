import math

for _ in range(int(input())):
    n = input()
    s = 0
    for i in n:
        s += math.factorial(int(i))
    print("Yes") if (str(s) == n) else print("No")    
