#include <stdio.h>
int main(){
    long long n,minn,maxx;
    minn=1000000000000000000;
    maxx=-1;

    while(scanf("%lld",&n) ==1){
        if(minn>n) minn=n;
        if(maxx<n) maxx=n;

    }
    printf("%lld %lld",maxx ,minn);
    return 0;
}