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
    m = int(data[1])  
    idx = 2
    for i in range(n):
        row_result = [] 
        for j in range(m):
            value = int(data[idx])
            idx += 1
            if check_nt(value):
                row_result.append(1)
            else:
                row_result.append(0)
        print(*row_result)
if __name__ == '__main__':
    solve()