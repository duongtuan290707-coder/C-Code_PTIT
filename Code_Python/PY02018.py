import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return
    n = int(data[0])
    a = set(int(x) for x in data[1 : n + 1])
    for i in range(1, n + 2):
        if i not in a:
            print(i)
            break 
if __name__ == '__main__':
    solve()