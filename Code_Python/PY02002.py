fi = [0] * 93
fi[1] = 1
fi[2] = 1
for i in range(3, 93):
    fi[i] = fi[i-1] + fi[i-2]
t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    ketqua = fi[a:b+1]
    print(*ketqua)