#include <stdio.h>
int kiemTraFibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int f0 = 0;
    int f1 = 1;
    int fn = 1; 
    while (fn < n) {
        f0 = f1;
        f1 = fn;
        fn = f0 + f1; 
    }
    if (fn == n) {
        return 1;
    } 
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", kiemTraFibonacci(n));
    return 0;
}