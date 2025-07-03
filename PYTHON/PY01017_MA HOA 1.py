if __name__ == '__main__':
    for t in range(int(input())):
        s = input()
        dem = 1
        res = ""
        for i in range(1, len(s)):
            if s[i - 1] == s[i]:
                dem += 1    
            else:
                res += str(dem) + s[i - 1]
                dem = 1
        res += str(dem) + s[-1]        
        print(res)        
        
