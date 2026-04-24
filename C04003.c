#include <stdio.h>

void kiemTraDoiXung() {
    int n;
    scanf("%d", &n);
    int a[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int check = 1; // 1. Cắm cờ: Tạm tin mảng này là ĐỐI XỨNG (YES)

    // 2. Cho 2 ông bảo vệ đi từ 2 đầu vào, chỉ cần đi đến GIỮA MẢNG (n / 2) là gặp nhau
    for (int i = 0; i < n / 2; i++) {
        
        // Nếu phần tử bên trái KHÁC phần tử đối diện bên phải
        if (a[i] != a[n - 1 - i]) {
            check = 0; // Kéo cờ xuống (NO)
            break;     // Dùng break để thoát vòng lặp ngay lập tức, không cần kiểm tra thêm
        }
    }

    // 3. Kết luận dựa vào trạng thái cờ
    if (check == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        kiemTraDoiXung();
    }
    return 0;
}