t = int(input())
for _ in range(t):
    s = input().strip()
    tong = 0
    tich = 1
    co_so_khac_khong = False 
    for i in range(len(s)):
        if i % 2 == 0:
            tong += int(s[i])
        else:
            if s[i] != '0':
                tich *= int(s[i])
                co_so_khac_khong = True 
    if co_so_khac_khong == False:
        tich = 0
    print(f"{tong} {tich}")
