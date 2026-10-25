import sys
import math
def check_nt(k):
    if k < 2:
        return False
    for i in range(2, int(math.sqrt(k)) + 1):
        if k % i == 0:
            return False
    return True
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    n = int(data[0])
    a = [int(x) for x in data[1 : n + 1]]
    dem = {}
    for x in a:
        if check_nt(x):
            dem[x] = dem.get(x, 0) + 1
    for x, dem1 in dem.items():
        print(f"{x} {dem1}")

if __name__ == '__main__':
    solve()