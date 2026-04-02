#include <stdio.h>
int main(){
    long long n,maxx;
    maxx=-1;
    while(scanf("%lld",&n) ==1){
        if(maxx<n) maxx=n;
    }
    printf("%lld",maxx);
    return 0;
}