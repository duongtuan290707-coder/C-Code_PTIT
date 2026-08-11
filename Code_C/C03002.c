#include <stdio.h>
#include <math.h>

// 1. Mang "Chuyên gia kiểm tra nguyên tố" vào đây
int kiemTraNguyenTo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    scanf("%d", &n); // Không có bộ test t, chỉ nhập 1 số N

    // 2. Vòng lặp duyệt các số từ 2 đến SÁT N (i < n)
    for (int i = 2; i < n; i++) {
        
        // Nếu chuyên gia kết luận i là số nguyên tố (trả về 1 tức là ĐÚNG)
        if (kiemTraNguyenTo(i) == 1) {
            
            // In ra và nhớ XUỐNG DÒNG theo đúng format Output
            printf("%d\n", i); 
        }
    }

    return 0;
}