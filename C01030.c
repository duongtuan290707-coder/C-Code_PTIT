#include <stdio.h>
#include <math.h>
void A(int n) {
    scanf("%d", &n);
    for (int i=2; i<= sqrt(n); i++) {
        while( n%i==0) {
            printf("%d ", i);
            n=n/i;
            if(n>1) {printf("%d ", &n);}
        }
    }
    printf("\n");
}
int main () {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        A(n);
    }
    return 0;
}