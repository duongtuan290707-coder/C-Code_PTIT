import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    so_du_khac_nhau = set()
    for x in data:
        so_du_khac_nhau.add(int(x) % 42)    
    print(len(so_du_khac_nhau))
if __name__ == '__main__':
    solve()