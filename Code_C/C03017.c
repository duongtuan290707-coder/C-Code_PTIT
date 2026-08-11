#include <stdio.h>
int kiemtratn(long long n) {
    long long sodao = 0;
    long long sogoc =n;
    while(n>0) {
        sodao = sodao*10 + n%10;
        n /= 10;
    }
    return sodao == sogoc;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        if(kiemtratn(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}