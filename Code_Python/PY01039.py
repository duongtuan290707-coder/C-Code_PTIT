t = int(input())
for _ in range(t):
    s = input().strip()
    if len(set(s)) == 2:
        hople = True
        for i in range(len(s)-2):
            if s[i] != s[i+2]:
                hople = False
                break
        if hople == True:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")