if __name__ == '__main__':
    for _ in range(int(input())):
        s = input()
        res = ""
        min_val = float('inf')
        for c in s:
            if c.isdigit():
                res += c
            else:
                if res:
                    min_val = min(min_val, int(res))
                    res = ""
        if res:
            min_val = min(min_val, int(res))
        print(min_val)
