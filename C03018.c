#include <stdio.h>
#include <math.h>
int kiemtrant(int n) {
    for(int i=2; i*i<n; i++) {
        if(n%i==0) { 
            return 0;
        }
    }
    return 1;
}
int kiemTraF(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int f0 = 0;
    int f1 = 1;
    int fn = 1; 
    while (fn < n) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1; 
    } 
    int sum=0;
    while(n>0) {
        sum = sum + n%10;
        n = n /10;
    }
    if(sum == fn) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int a,b,n;
    scanf("%d %d", &a,&b);
    for(int i=a; i<=b; i++) {
        if(kiemtrant(n) && kiemTraF(n)) {
            printf("%d ", i);
        }
    }
    return 0;
}