import math
def check_nt(k):
    if k < 2:
        return False
    for i in range(2, int(math.sqrt(k))+1):
        if k % i == 0:
            return False
    return True
t = int(input())
for _ in range(t):
    s = input().strip()
    for i in range (0, len(s), 2):
        if s[i] not in ['0', '2', '4', '6', '8']:
            hop_le = False
            break
    hople = True
    for i in range(1, len(s), 2):
        if s[i] not in ['1', '3', '5', '7', '9']:
            hople = False
            break
    tong = 0
    for char in s:
        tong += int(char)
    if not hople or not check_nt(tong):
        print("NO")
    else:
        print("YES")