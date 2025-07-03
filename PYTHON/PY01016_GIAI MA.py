for t in range(int(input())):
    s = input()
    st = []
    res = ""
    for c in s:
        if c.isalpha():
            st.append(c)
        elif c.isdigit():
            tmp = st.pop()
            res += tmp * int(c)
    print(res)         



