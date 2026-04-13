#include <stdio.h>
int main() {
    int n;
    int ketqua=1;
    for(int i=1; i<=n; i++) {
        n=n%10;
        ketqua = ketqua*i;
    }
    if(ketqua==n) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}