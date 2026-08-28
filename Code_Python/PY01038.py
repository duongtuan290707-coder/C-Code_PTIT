t = int(input())
for _ in range(t):
    n = input().strip() 
    tim_thay = False 
    for buoc in range(1001):
        so = int(n)
        if so % 7 == 0:
            print(so)
            tim_thay = True
            break 
        so_dao_nguoc = int(n[::-1])
        tong = so + so_dao_nguoc
        n = str(tong)
    if tim_thay == False:
        print("-1")