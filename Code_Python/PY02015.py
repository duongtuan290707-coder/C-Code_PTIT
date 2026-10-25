import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return 
    idx = 0
    while idx < len(data):
        a = [int(data[idx]), int(data[idx+1]), int(data[idx+2]), int(data[idx+3])]
        idx += 4
        if a == [0, 0, 0, 0]:
            break
        dem = 0
        while len(set(a)) > 1:
            a = [
                abs(a[0] - a[1]), 
                abs(a[1] - a[2]), 
                abs(a[2] - a[3]), 
                abs(a[3] - a[0])
            ]
            dem += 1
        print(dem)
if __name__ == '__main__':
    solve()