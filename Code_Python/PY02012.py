import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return False
    n = int(data[0])
    a = [int(x) for x in data[1:n+1]]
    chan = sorted([x for x in a if x%2==0], reverse = True)
    le = sorted([x for x in a if x%2 != 0])
    ketqua = []
    for x in a:
        if x % 2 == 0:
            ketqua.append(chan.pop())
        else:
            ketqua.append(le.pop())
    print(*ketqua)
if __name__ == '__main__':
    solve()