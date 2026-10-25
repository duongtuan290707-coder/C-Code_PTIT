import math
def mang_nt(k):
    is_prime = [True] * (k+1)
    is_prime[0] = is_prime[1] = False
    for i in range(2, int(math.sqrt(k)) + 1):
        if is_prime[i]:
            for j in range(i * i, k + 1, i):
                is_prime[j] = False
    primes = []
    for i in range(2, k + 1):
        if is_prime[i]:
            primes.append(i)
    return primes
def solve():
    primes = mang_nt(10000)                       
    n, x = map(int, input().split())
    ket_qua = [x]
    for i in range(n):
        x += primes[i]
        ket_qua.append(x)
    print(*ket_qua)
if __name__ == '__main__':
    solve()