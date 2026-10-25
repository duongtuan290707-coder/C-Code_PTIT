import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    n = int(data[0])
    a = [int(x) for x in data[1:n+1]]
    dem = 0
    for i in range(n - 1):
        for j in range(i + 1, n):
            if a[i] > a[j]:
                dem += 1
    print(dem)
if __name__ == '__main__':
    solve()