#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int sum;
    int i;
    for (i>=a; i<=b; i++) {
        if(a>b) {
            a=b; b=a;
        }
        sum = sum + i;
    } printf("%d", sum);
    return 0;
}