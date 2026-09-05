import math
N, K = map(int, input().split())
dem =0
for i in range(10**(K-1), 10**K):
    if math.gcd(N,i) == 1:
        print(i, end=" ")
        dem += 1
        if dem == 10:
            print()
            dem =0
