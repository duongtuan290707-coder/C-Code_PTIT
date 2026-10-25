import sys
import math
def check(gioi_han):
    is_prime = [True] * (gioi_han + 1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(math.sqrt(gioi_han)) + 1):
        if is_prime[i]:
            for j in range(i * i, gioi_han + 1, i):
                is_prime[j] = False
    return is_prime
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    n = int(data[0])
    a = [int(x) for x in data[1:n+1]]
    is_prime = check(11000)
    max_buoc = 0
    for x in a:
        khoang_cach = 0
        while True:
            if (x - khoang_cach >= 2 and is_prime[x - khoang_cach]) or is_prime[x + khoang_cach]:
                break 
            khoang_cach += 1          
        if khoang_cach > max_buoc:
            max_buoc = khoang_cach
    print(max_buoc)
if __name__ == '__main__':
    solve()