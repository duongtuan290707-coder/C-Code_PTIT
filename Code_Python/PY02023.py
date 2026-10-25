import sys
def tong_chu_so(s):
    return sum(int(d) for d in s)
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    t = int(data[0])
    idx = 1
    for _ in range(t):
        if idx >= len(data):
            break  
        n = int(data[idx])
        idx += 1
        a = data[idx : idx + n]
        idx += n
        a.sort(key=lambda x: (tong_chu_so(x), int(x)))
        print(" ".join(a))
if __name__ == '__main__':
    solve()
            