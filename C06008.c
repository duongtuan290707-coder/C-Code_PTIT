#include <stdio.h>
#include <string.h>
int main() {
    char s[105];
    scanf("%[^\n]", s); 
    // 1. Tạo một cuốn sổ tay (Mảng chuỗi 2 chiều)
    // Sổ có 100 trang, mỗi trang chứa được 1 từ dài tối đa 100 chữ cái
    char soTay[100][105]; 
    int soLuongTu = 0; // Đếm xem sổ đã ghi chép được bao nhiêu từ rồi
    // 2. Rút gươm thái chữ
    char *tu = strtok(s, " \t"); 
    while (tu != NULL) {
        int daXuatHien = 0; // Đặt một cái cờ hiệu, giả sử từ này là từ mới  
             
        // 3. Lật sổ tay ra dò từng trang
        for (int i = 0; i < soLuongTu; i++) {
            // Nếu phát hiện từ này giống y hệt 1 từ đã ghi trong sổ
            if (strcmp(soTay[i], tu) == 0) {
                daXuatHien = 1; // Phất cờ báo hiệu: Hàng trùng lặp!
                break;          // Đóng sổ lại luôn, không cần dò thêm nữa
            }
        }
        // 4. Xử lý sau khi dò sổ
        // Nếu cờ vẫn là 0 (tức là tìm mỏi mắt không thấy trong sổ -> Từ mới tinh)
        if (daXuatHien == 0) {
            printf("%s ", tu); // In ra màn hình
            
            // TUYỆT CHIÊU: Chép ngay từ này vào trang sổ trống tiếp theo
            strcpy(soTay[soLuongTu], tu); 
            soLuongTu++; // Sổ tay dày thêm 1 trang
        }
        
        // Cắt nhát tiếp theo
        tu = strtok(NULL, " \t");
    }
    return 0;
}