#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if (a==0) { 
        if(b==0) {
            printf("No"); }
            else printf("%.2f", -c/b); }
    else {
        float delta = b*b - 4*a*c;
        if (delta < 0) {
            printf("No");
        } else if (delta == 0) {
            printf("%.2f", -b / (2*a));
        } else {
            float x1 = (-b - sqrt(delta)) / (2*a);
            float x2 = (-b + sqrt(delta)) / (2*a);
            if (x1 > x2) {
                printf("%.2f %.2f", x1, x2);
            } else {
                printf("%.2f %.2f", x2, x1);
            }
        }
    }
    return 0;
}

    

