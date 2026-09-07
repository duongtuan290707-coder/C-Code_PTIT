t = int(input())
for _ in range(t):
    s = input().strip()
    if len(s) % 2 == 0 or s[0] == s[1]:
        print("NO")
        continue    
    hop_le = True
    for i in range(2, len(s), 2):
        if s[i] != s[0]:
            hop_le = False
            break
    if hop_le == True:
        print("YES")
    else:
        print("NO")