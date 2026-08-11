#include <stdio.h>
#include <math.h>
int main () {
int t;
scanf("%d", &t);
while (t--) {
    int n;
    scanf("%d", &n);
    int count=0;
    for(int i=1; i<=sqrt(n); i++) {
        if(n%i==0) {
            if(i%2==0) {
                count++;
            } 
            int j=n/i;
            if(j%2==0 && j!=i) {
                count++;
            }
        }
    }
    printf("%d\n", count);
}  
return 0;
}