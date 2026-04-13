#include <stdio.h>
int Demso(long long n) {
    if(n==0) {
        return 1;
    }
    if(n<0) {
        n=-n;
    }
    int count=0;
    while(n>0) {
        count++;
        n=n/10;
    }
    return count;
}
int main() {
    long long n;
    scanf("%lld", &n);
    printf("%d", Demso(n));
    return 0;
}
