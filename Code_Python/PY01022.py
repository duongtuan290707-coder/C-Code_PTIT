s = input().strip() 
while len(s) >= 1:
    so_buoc=0
    tong = 0
        
    for char in s:
        tong += ord(char) - ord('0')
        s = str(tong)
        so_buoc += 1
print(so_buoc)