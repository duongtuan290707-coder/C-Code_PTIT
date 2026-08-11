#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int suma=0, sumb=0, tempa=a, tempb=b;
    while(tempa>0) {
        suma = suma + tempa%10;
        tempa = tempa/10;
    }
    while(tempb>0) {
        sumb = sumb + tempb%10;
        tempb /= 10;
    }
    if(suma <= sumb) {
        printf("%d %d", a,b);
    } else {
        printf("%d %d", b,a);
    }
    return 0;
}