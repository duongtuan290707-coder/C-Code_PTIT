#include <stdio.h>
#include <math.h>
int kiemtrant(int n) {
    for(int i=2; i<= sqrt(n); i++) {
        if(n%i ==0) 
        return 0;
    }
    return 1;
}
int kiemtratn (int n) {
    int sodao = 0;
    int sogoc = n;
    while(n>0) {
        sodao = sodao*10 + n%10;
        n /= 10;
    }
    return sodao == sogoc;
}
int main() {
    int a,b,t;
    scanf("%d", &t);
    int dem=0;
    while(t--) {
         scanf("%d %d", &a , &b);
    for(int i=a; i<=b; i++) {
        if( kiemtrant(i) && kiemtratn(i)) {
        printf("%d ", i);
        dem++;
        if(dem % 10 == 0) {
            printf("\n");
        }
    }
} 
if(dem % 10 !=0) {
    printf("\n");}
 }
printf("\n");
    return 0;
}