#include <stdio.h>
int A( long long n) {
    while(n>=10) {
    int right=n%10;
    int left= (n/10)%10;
    if(left>right) {
        return 0;
    } 
    n = n/10;
    } return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    long long n;
    scanf("%lld", &n);
    if(A(n)==1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
} return 0;
}