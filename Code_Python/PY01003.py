# BƯỚC 1: Đọc số lượng test case
t = int(input())

for _ in range(t):
    s = input().strip()
    
    # Nếu số chỉ có 1 chữ số (như 5, 7) thì không cần làm tròn, in ra luôn
    if len(s) == 1:
        print(s)
    else:
        # Ép chuỗi thành mảng các số nguyên. Ví dụ '1445' -> [1, 4, 4, 5]
        digits = [int(x) for x in s]
        
        # BƯỚC 2: Duyệt ngược từ cuối mảng về vị trí index 1
        for i in range(len(digits) - 1, 0, -1):
            if digits[i] >= 5:
                # Cập nhật số liền trước (cộng thêm 1)
                digits[i - 1] += 1
            
            # Số hiện tại luôn bị biến thành 0 sau khi xét xong
            digits[i] = 0
            
        # BƯỚC 3: Ghép mảng số nguyên lại thành chuỗi và in ra
        # Dùng List Comprehension để đổi int thành str, rồi join lại
        res = "".join(str(x) for x in digits)
        print(res)