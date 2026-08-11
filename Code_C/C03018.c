#include <stdio.h>
#include <math.h>
int kiemtrant(int n) {
    for(int i=2; i*i <= n; i++) {
        if(n%i==0) { 
            return 0;
        }
    }
    return 1;
}
int tongchuso(int n) {
    int sum=0;
    while(n>0) {
        sum = sum + n%10;
        n = n /10;
    }
    return sum;
}
int kiemtraF(int n) {
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
    if(fn == n) return 1;
    return 0;
}
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    if(a>b) {
        int temp = a;
        a=b;
        b=temp;
    }
    for(int i=a; i<b; i++) {
        if(kiemtrant(i)==1) {
            int tong = tongchuso(i);
            if(kiemtraF(tong) == 1) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}