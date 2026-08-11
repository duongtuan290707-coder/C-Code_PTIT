#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int last = n%10;
    int p=1;
    int first=n;
     while(first >=10) {
        first = first /10 ;
        p = p*10;
     }
     int mid = (n%p) / 10;
     int A = last*p + mid*10 + first;
     printf("%d\n", A);
     return 0;
}