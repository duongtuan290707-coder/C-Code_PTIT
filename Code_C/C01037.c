#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int min=a; 
    int max=b;
    if(a>b) {
        min=b;
        max=a;
    }
    long long sum=0;
    int i;
    for (i = min; i<=max; i++) {
        sum = sum + i;
    } 
    printf("%lld", sum);
    return 0;
}