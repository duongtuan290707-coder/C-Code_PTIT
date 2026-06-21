#include <stdio.h>
int main() {
    int n,i;
    scanf("%d", &n);
    int f0 =0;
    int f1 =1;
    int fn;
    for(int i=0; i<n; i++) {
        printf("%d ", f0);
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
 }