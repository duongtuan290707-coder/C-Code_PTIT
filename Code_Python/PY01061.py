import math
def check_nt(k):
    if  k < 2:
        return False
    for i in range(2, int(math.sqrt(k))+1):
        if k % i == 0:
            return False
    return True
t = int(input())
for _ in range(t):
    s = input().strip()
    dau = int(s[:3])
    cuoi = int(s[-3:])
    if check_nt(dau) and check_nt(cuoi):
        print("YES")
    else:
        print("NO")