t = int(input())
for _ in range(t):
    s = input().strip()
    hople = True
    for char in s:
        if char not in ['0', '1', '2']:
            hople = False
            break
    if hople == False:
        print("NO")
    else:
        print("YES")