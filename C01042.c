#include <stdio.h>
int tonggiaithua(int n) {
    int ketqua=1;
    for(int i=1; i<=n; i++) {
        ketqua = ketqua*i;
    }
    return ketqua;
}
int main() {
    int n;
    n<=20;
    scanf("%d", &n);
    printf("%d",tonggiaithua(n));
    return 0;
}