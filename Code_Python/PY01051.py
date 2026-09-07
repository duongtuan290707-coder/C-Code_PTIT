t = int(input())
for _ in range(t):
    s = input().strip()
    tong = sum(int(x) for x in s)
    chuoi_tong = str(tong)
    if len(chuoi_tong) > 1 and chuoi_tong == chuoi_tong[::-1]:
        print("YES")
    else:
        print("NO")