import math

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, X, M = map(float, input().split())
        base = 1 + X / 100
        years = math.log(M / N, base)
        print(math.ceil(years))
