t = int(input())
for _ in range(t):
    s = input().strip()
    sum = 0
    hople = True
    for char in s:
        sum += int(char)
    if sum %10 != 0:
        hople = False
    for i in range(1, len(s)):
        distance = abs(int(s[i]) - int(s[i-1]))
        if distance != 2:
            hople = False
            break
    if hople == True:
        print("YES")
    else:
        print("NO")