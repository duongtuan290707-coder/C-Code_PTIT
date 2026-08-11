#include <stdio.h>
int tonggiaithua(int n) {
    int ketqua=1;
    for(int i=1; i<=n; i++) {
        ketqua = ketqua*i;
    }
    return ketqua;
}
int strong(int n) {
    int sum=0;
    int temp=n;
    while(temp>0) {
        int so = temp%10;
        sum = sum + tonggiaithua(so);
        temp = temp /10;
    }
    if(sum==n) {
        return 1;
    } 
        return 0;
    
}
int main() {
    int a,b,i;
    scanf("%d %d", &a,&b);
    if(a>b) {
        int temp=a;
        a = b;
        b = temp;
    }
    for(i=a; i<=b; i++) {
        if(strong(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}