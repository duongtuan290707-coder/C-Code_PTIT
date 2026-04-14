#include <stdio.h>
int main () {
int t;
scanf("%d", &t);
while (t--) {
    int n;
    scanf("%d", &n);
    int temp=n;
    int count=0;
    for(int i=1; i<=n; i++) {
        temp % i ==0;
        if(i%2==0) {count++;} 

    } printf("%d\n", count);
}  
return 0;
}