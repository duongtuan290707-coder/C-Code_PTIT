import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return       
    n = int(data[0])
    m = int(data[1])
    a = set(int(x) for x in data[2 : 2 + n])
    b = set(int(x) for x in data[2 + n : 2 + n + m])
    giao = sorted(a & b)
    hieua_b = sorted(a - b)
    hieub_a = sorted(b - a)
    print(*giao)
    print(*hieua_b)
    print(*hieub_a)
if __name__ == '__main__':
    solve()