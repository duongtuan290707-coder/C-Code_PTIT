#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
         int maxx = 0;
            int minn = 9;
        while(n>0) {
           int x = n%10;
            if(x>maxx) {
            maxx = x; }
            if(x<minn) {
            minn = x;}
            n = n/10;
        } printf("%d %d\n", maxx, minn);
    }    
    return 0;
}