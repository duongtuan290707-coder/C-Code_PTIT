#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int min1=1000;
    int min2=1000;
    for (int i = 0; i < n; i++) {
        if (a[i] < min1) {
            min2 = min1; // Đẩy top 1 cũ xuống top 2
            min1 = a[i]; // Cập nhật top 1 mới
        } 
        else if (a[i] > min1 && a[i] < min2) {
            min2 = a[i]; // Cập nhật top 2 mới
        }
    } printf("%d %d\n", min1, min2);
    return 0;
}