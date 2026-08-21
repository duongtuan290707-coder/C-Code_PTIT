s = input().strip()
tong_dem = s.count('4') + s.count('7')
if tong_dem == 4 or tong_dem == 7:
    print("YES")
else:
    print("NO")

