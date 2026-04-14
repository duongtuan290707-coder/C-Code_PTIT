#include <stdio.h>
int tonggiaithua(int n) {
    int ketqua=1;
    for(int i=1; i<=n; i++) {
        ketqua = ketqua*i;
    }
    return ketqua;
}
int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    int temp=n;
    while (temp>0) {
        int so = temp % 10;
        sum = sum + tonggiaithua(so);
        temp = temp / 10;
    }
    if(sum==n) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}