import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return      
    s = data[0]
    k = int(data[1])
    dem = {}
    for i in range(0, len(s) - 1, 2):
        x = int(s[i:i+2])
        dem[x] = dem.get(x, 0) + 1
    thoa_man = []
    for x, count in dem.items():
        if count >= k:
            thoa_man.append(x)
    if len(thoa_man) == 0:
        print("NOT FOUND")
    else:
        thoa_man.sort()
        for x in thoa_man:
            print(f"{x} {dem[x]}")
if __name__ == '__main__':
    solve()