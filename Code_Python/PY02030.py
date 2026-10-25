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
    b = []
    seen = set()
    for x in a:
        if x not in seen:
            b.append(x)
            seen.add(x)
    tong_toan_mang = sum(b)
    tong_trai = 0
    for i in range(len(b)):
        tong_trai += b[i]
        tong_phai = tong_toan_mang - tong_trai
        if check_nt(tong_trai) and check_nt(tong_phai):
            print(i)
            return
    print("NOT FOUND")

if __name__ == '__main__':
    solve()