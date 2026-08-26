t = int(input())
for _ in range(t):
    s1 = input()
    s2 = s1[::-1]
    hople = True
    for i in range(1, len(s1)):
        kc1 = abs(ord(s1[i]) - ord(s1[i-1]))
        kc2 = abs(ord(s2[i]) - ord(s2[i-1]))
        if kc1 != kc2:
            hople = False
            break
    if hople == True:
        print("YES")
    else:
        print("NO")