#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    int n;
    scanf("%d", &n);
    int sumchan=0, sumle=0;
    if(n==0) printf("0 1");
    while(n>0){
        int digit = n%10;
        
        if(digit%2==0) sumchan++;
        else sumle++;
        n/=10;
    } 
   
    printf("%d %d\n", sumle, sumchan); }
    return 0;
}