#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int tich=1;
    while(n>0) {
        int a = n%10;
        tich = tich * a;
        n = n/10;
    }
    printf("%d", tich);
    return 0;
}