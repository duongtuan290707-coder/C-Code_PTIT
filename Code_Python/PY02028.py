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
    primes = []
    for x in a:
        if check_nt(x):
            primes.append(x)
    primes.sort()
    idx = 0 
    for i in range(n):
        if check_nt(a[i]):
            a[i] = primes[idx]
            idx += 1 
    print(*a)
if __name__ == '__main__':
    solve()