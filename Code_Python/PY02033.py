import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return       
    s = data[0]
    ketqua = []
    seen = set()
    for i in range(0, len(s)-1, 2):
        x = int(s[i:i+2])
        if x not in seen:
            ketqua.append(x)
            seen.add(x)
    print(*ketqua)
if __name__ == '__main__':
    solve()