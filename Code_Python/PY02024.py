import sys
import math
def tich(n):
    return math.prod(int(d) for d in n)  
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    t = int(data[0])
    idx = 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        a = data[idx : idx +n]
        idx += n
        a.sort(key=lambda x: (tich(x), int(x)))
        print(" ".join(a))
if __name__ == '__main__':
    solve()