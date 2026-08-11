#include <stdio.h>
#include <math.h>
int ucln(int a, int b) {
    while(b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int kiemtrant(int n) {
    if(n<2) {
        return 0;
    }
    for(int i=2; i*i <= n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a,b;
        scanf("%d %d", &a,&b);
        int ucln1 = ucln(a,b);
        int temp = ucln1;
        int sum = 0;
        while(temp > 0) {
            sum = sum + temp%10;
            temp = temp /10;
        }
        if(kiemtrant(sum) == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}