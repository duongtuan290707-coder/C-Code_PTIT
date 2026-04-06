#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum=0;
    int x=n;
    while (x>0) {
        int a = x%10;
        sum = sum + a;
        x = x/10;
    }
    printf("%d", sum);
    return 0;
}