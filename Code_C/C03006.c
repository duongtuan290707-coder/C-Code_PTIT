#include <stdio.h>
#include <math.h>
void A(int n) {
    for (int i=2; i<= sqrt(n); i++) {
        if(n%i==0) {
            int count=0;
        
        while( n%i==0) {
            count++;
            n = n / i;
        } 
    printf("%d(%d) ", i, count);}
    }
         if(n>1) {printf("%d(1) ", n);}
    printf("\n");
}
int main () {
    int t;
    scanf("%d", &t);
    for(int test=1; test<=t; test++) {
        int n;
        scanf("%d", &n);
        printf("Test %d: ", test);
        A(n);
    }
    return 0;
}