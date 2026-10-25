def tong_chu_so(s):
    tong = 0
    for d in s:          # Bóc từng ký tự trong chuỗi
        so = int(d)      # Ép ký tự đó thành số nguyên
        tong += so       # Cộng dồn vào tổng
    return tong