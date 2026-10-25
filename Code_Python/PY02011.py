import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return False
    n = int(data[0])
    a = [int(x) for x in data[1:n+1]]
    min_step = float('inf')
    target_value = -1
    for x in a:
        current_step = sum(abs(y-x) for y in a)   
        if current_step < min_step:
            min_step = current_step
            target_value = x
    print(min_step, target_value)
if __name__ == '__main__':
    solve()        