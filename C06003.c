#include <stdio.h>
#include <string.h> // Bắt buộc phải có thư viện này để dùng thanh gươm strtok

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[205]; 
        // Vượt bẫy 1 và 2: Nuốt Enter thừa và đọc toàn bộ chuỗi có chứa dấu cách
        scanf("\n%[^\n]", s);
        int count = 0;
        // Rút gươm: Cắt chuỗi s thành các từ, dùng dấu cách " " và tab "\t" làm thớt
        char *tu = strtok(s, " \t");
        // Quá trình thái chữ liên tục
        while (tu != NULL) {
            count++; // Gắp được 1 từ -> Đếm 1
            // Lệnh chém nhát tiếp theo vào phần còn lại của chuỗi
            tu = strtok(NULL, " \t"); 
        }
        printf("%d\n", count);
    }
    return 0;
}