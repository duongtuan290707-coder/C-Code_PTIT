#include <stdio.h>
int kiemtra(int a, int b) {
    while (b != 0) {
        int r = a % b; 
        a = b;               
        b = r;  
                   
    }  
    if(a == 1) { return 1; }  
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++) {
        for(int j=i+1;j<=b;j++) {
            if(kiemtra(i,j)==1) {
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}