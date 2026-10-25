import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return       
    s = data[0]
    ketqua = []
    seen = set()
    dem = {}
    for i in range(0, len(s)-1, 2):
        x = int(s[i:i+2])
        dem[x] = dem.get(x,0) + 1
        if x not in seen:
            ketqua.append(x)
            seen.add(x)
    for x, dem1 in dem.items():
        print(f"{x} {dem1}")
if __name__ == '__main__':
    solve()