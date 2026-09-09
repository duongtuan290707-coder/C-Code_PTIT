import math
t = int(input())
for _ in range(t):
    a = int(input())
    b = int(input())
    uoc = math.gcd(a,b)
    print(uoc)