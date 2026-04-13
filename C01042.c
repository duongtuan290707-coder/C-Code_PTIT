#include <stdio.h>
long long tonggiaithua(int n) {
    long long ketqua=1;
    long long sum=0;
    for(int i=1; i<=n; i++) {
        ketqua = ketqua*i;
        sum = sum + ketqua;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%lld",tonggiaithua(n));
    return 0;
}