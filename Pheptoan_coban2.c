#include <stdio.h>
int main() {
    long long a,b;
   if(scanf("%lld%lld",&a,&b)==2) {
        printf("%lld\n", a + b);         
        printf("%lld\n", a - b);         
        printf("%lld\n", a * b);         
        printf("%lld\n", a / b);         
        printf("%lld\n", a % b);         
        printf("%.2lf\n", (double)a / b);}
    
       return 0;
}