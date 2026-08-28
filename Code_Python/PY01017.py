t = int(input())
for _ in range(t):
    s = input().strip() 
    chu_cai_dang_xet = s[0]
    dem = 1
    for i in range(1, len(s)):
        if s[i] == chu_cai_dang_xet:
            dem += 1
        else:
            print(f"{dem}{chu_cai_dang_xet}", end="")
            chu_cai_dang_xet = s[i]
            dem = 1
    print(f"{dem}{chu_cai_dang_xet}")