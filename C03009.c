#include <stdio.h>
#include <math.h>
int kiemTraHoanHao(int n) {
    int i;
    int tongUoc = 1; 
    if (n <= 1) return 0; 
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            tongUoc += i; 
            if (i != n / i) { 
                tongUoc += n / i;
            }
        }
    }
    if (tongUoc == n) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int i;
    int a,b;
    scanf("%d %d", &a,&b);
    if(a>b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (i = a; i <= b; i++) {
        if (kiemTraHoanHao(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}