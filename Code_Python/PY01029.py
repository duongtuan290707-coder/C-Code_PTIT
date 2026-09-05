import math
t = int(input())
for _ in range(t):
    astr = input()
    bstr = astr[::-1]
    a = int(astr)
    b = int(bstr)
    if math.gcd(a,b) == 1:
        print("YES")
    else:
        print("NO")