import sys
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
        a = [int(x) for x in data[idx : idx + n]]
        idx += n 
        b = [int(x) for x in data[idx : idx + n]]
        idx += n 
        if len(a) < n or len(b) < n:
            break
        a.sort()
        b.sort()
        hop_le = True
        for i in range(n):
            if a[i] > b[i]: 
                hop_le = False
                break
        if hop_le:
            print("YES")
        else:
            print("NO")
if __name__ == '__main__':
    solve()
