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
    so_cuoi = int(s[-4:])
    if check_nt(so_cuoi):
        print("YES")
    else:
        print("NO")