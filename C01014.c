#include <stdio.h>
int main(){
    float a,b;
    scanf("%f%f", &a, &b);
    printf("%f*(x)+%f=0\n", a, b);
    if (a == 0) {
        if (b == 0)
            printf("Vo so nghiem\n");
        else
            printf("Vo nghiem\n");
    } else {
        printf("%.2f\n", -b / a);
    }
    return 0;
}
