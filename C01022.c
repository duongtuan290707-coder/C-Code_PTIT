#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d\n", &n);
    int sum=0;
    while(n>0) {
        int chuso = n%10;
        sum = sum + chuso;
        n = n/10;
    }
    printf("%d\n", sum);
    } 
    return 0; 
}
