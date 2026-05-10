#include <stdio.h>
struct thoigian {
    int gio;
    int phut;
    int giay;
    int tonggiay;
};
int main() {
    int n;
    scanf("%d", &n);
    struct thoigian a[5005];
    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &a[i].gio, &a[i].phut, &a[i].giay);
        a[i].tonggiay= a[i].gio*3600 + a[i].phut*60 + a[i].giay;
    }
    for (int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i].tonggiay > a[j].tonggiay) {
                struct thoigian temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d %d %d\n", a[i].gio, a[i].phut, a[i].giay);
    }
    return 0;
}