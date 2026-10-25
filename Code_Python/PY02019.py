import sys
import math
def solve():
    data = sys.stdin.read().split()
    if not data:
        return     
    n = int(data[0])
    a = sorted([int(x) for x in data[1 : n + 1]])
    for i in range(n):
        for j in range(i + 1, n):
            if math.gcd(a[i], a[j]) == 1:
                print(f"{a[i]} {a[j]}")
if __name__ == '__main__':
    solve()