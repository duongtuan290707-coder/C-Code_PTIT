import math
def check_nt(k):
    if k < 2:
        return False
    for i in range (2, int(math.sqrt(k)) +1):
        if k % i == 0:
            return False
    return True
t = int(input())
for _ in range(t):
    s = input().strip()
    if not check_nt(len(s)):
        print("NO")
        continue
    dem_nt = s.count('2') + s.count('3') + s.count('5') + s.count('7')
    dem_0nt = len(s) - dem_nt
    if dem_nt < dem_0nt:
        print("NO")
    else:
        print("YES")