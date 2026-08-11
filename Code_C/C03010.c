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
    } else {
        return 0;}
}
int main() {
    int n,i;
    scanf("%d %d", &n);
    for(i=1; i<n-1; i++) {
        if(strong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}