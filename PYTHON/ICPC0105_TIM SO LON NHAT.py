if __name__ == '__main__':
    for _ in range(int(input())):
        s = input()
        res = ""
        max_val = float('-inf')
        for c in s:
            if c.isdigit():
                res += c
            else:
                if res:
                    max_val = max(max_val, int(res))
                    res = ""
        if res:
            max_val = max(max_val, int(res))
        print(max_val)
