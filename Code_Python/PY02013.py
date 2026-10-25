import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return False
    for item in data:
        n = int(item)
        if n == 0:
            break
        dem = 1 
        while n != 1:
            if n % 2 == 0:
                n = n // 2  
            else:
                n = n * 3 + 1
            dem += 1
        print(dem)

if __name__ == '__main__':
    solve()