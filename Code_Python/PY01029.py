import math
t = int(input())
for _ in range(t):
    a = input()
    b = a[::-1]
    if math.gcd[a,b] == 1:
        print("YES")
    else:
        print("NO")