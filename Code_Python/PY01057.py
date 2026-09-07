import math
def check_nt(k):
    if k < 2:
        return False
    for i in range(2, int(math.sqrt(k)) + 1):
        if k % i == 0:
            return False
    return True
t = int(input())
for _ in range(t):
    s = input().strip()
    tap_nguyen_to = ['2', '3', '5', '7']
    for i in range(len(s)):
        vtnt = check_nt(i)
        chusont = s[i] in tap_nguyen_to
        if vtnt != chusont:
            hop_le = False
            break
    if hop_le == True:
        print("YES")
    else:
        print("NO")