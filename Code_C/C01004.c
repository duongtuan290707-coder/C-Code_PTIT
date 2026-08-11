#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%.15lf\n",1.0/n);
    }
    return 0;
}