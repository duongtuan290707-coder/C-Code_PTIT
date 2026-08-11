#include <stdio.h>
#include <math.h>
int KTNT(int n) {
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) return 0;
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[101];
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(int i=0; i<n; i++){
            if(KTNT(a[i])==1) {printf("%d ", a[i]);}
        } 
        printf("\n");
    }
    return 0;
}