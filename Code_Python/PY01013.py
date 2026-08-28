import math
def kiemtrant(n):
    if n<2:
        return False
    for i in range(2, int(math.sqrt(n))+1):
        if n%i == 0:
            return False
    return True
t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    ucln = math.gcd(a,b)
    digits = [int(x) for x in str(ucln)]
    tong_chu_so = sum(digits)
    if kiemtrant(tong_chu_so) is True:
        print("YES")
    else:
        print("NO")

