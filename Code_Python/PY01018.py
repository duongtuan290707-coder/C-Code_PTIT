# 1. Khai báo "từ điển" chuẩn (Nhớ copy cho chuẩn xác nhé)
P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

# 2. Vòng lặp vô tận để đọc dữ liệu
while True:
    # Đọc cả dòng và băm nát bằng dấu cách
    data = input().split()
    
    # Nếu phần tử đầu tiên là số '0' -> Dừng cuộc chơi ngay lập tức
    if data[0] == '0':
        break
        
    # Lấy K và chuỗi S từ mảng data
    K = int(data[0])
    S = data[1]
    
    chuoi_ma_hoa = ""
    
    # 3. Đi từng chữ cái trong S để mã hóa
    for char in S:
        # - Tìm vị trí (index) của char trong P bằng hàm .find()
        # - Tính vị trí mới theo công thức: (index + K) % 28
        # - Lấy chữ cái mới trong P ghép vào chuoi_ma_hoa
        pass # <-- Bạn viết logic ở đây nhé
        
    # 4. Đề yêu cầu "đảo ngược" xâu sau khi mã hóa
    # (Gợi ý: Dùng lại tuyệt chiêu cắt bánh mì [::-1])
    # print(...)