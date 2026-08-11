#include <stdio.h>
long long ucln(long long a,long long b) {
        while( b != 0) {
        int r=a%b;
        a = b;
        b = r;
    } 
    return a;
}
long long bcnn(long long a,long long b) {
    return (a/ucln(a,b) * b);
}
 
int main() {
    int t;
    scanf("%d", &t);
    long long a,b;
    while (t--) {
        scanf("%lld %lld", &a, &b);
        printf("%lld %lld\n", bcnn(a,b), ucln(a,b));
    }
    return 0;
}