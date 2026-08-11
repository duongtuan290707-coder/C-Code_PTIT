#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d", &n);
    int sum=0;
    while(n>0) {
        int chuso = n%10;
        sum = sum + chuso;
        n = n/10;
    }
    if (sum%10==0) { printf("YES\n");
    } else {
        printf("NO\n");
    }
     
    } 
    return 0; 
}
