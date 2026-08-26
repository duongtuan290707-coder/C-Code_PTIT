t = int(input())
for _ in range(t):
    s = input()
    for i in range(0, len(s), 2):
        chucai = s[i]
        sl = int(s[i+1])
        print(chucai*sl, end="")
    print()
