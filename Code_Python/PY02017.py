import sys
def solve():
    data = sys.stdin.read().split()
    if not data:
        return      
    t = int(data[0]) 
    idx = 1  
    for _ in range(t):
        if idx >= len(data):
            break          
        n = int(data[idx]) 
        idx += 1
        ket_qua = 0
        for _ in range(n):
            if idx < len(data):
                ket_qua ^= int(data[idx])
                idx += 1
        print(ket_qua)
if __name__ == '__main__':
    solve()