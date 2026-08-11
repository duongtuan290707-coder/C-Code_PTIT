#include <stdio.h>
int nghichdao(int n) {
    int sodao =0;
    int sogoc = n;
    while(n>0) {
        sodao = sodao*10 + n%10;
        n /= 10;
    }
    return sodao == sogoc;
}
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int checka = nghichdao(a), checkb = nghichdao(b);
    if( checka == 1 && checkb == 0 || checkb == 1 && checka == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}