import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return       
    s = data[0] 
    tap_hop_so = set()
    for i in range(0, len(s) - 1, 2):
        hai_chu_so = int(s[i : i+2])
        tap_hop_so.add(hai_chu_so)
    ket_qua = sorted(tap_hop_so)
    print(*ket_qua)
if __name__ == '__main__':
    solve()