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
        dem = {}
        max_freq = 0
        ans = -1
        for i in range(idx, idx + n):
            x = int(data[i])
            dem[x] = dem.get(x, 0) + 1
            if dem[x] > max_freq:
                max_freq = dem[x]
                ans = x
        idx += n
        if max_freq > n / 2:
            print(ans)
        else:
            print("NO")
if __name__ == '__main__':
    solve()