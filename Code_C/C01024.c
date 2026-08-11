#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int last = n%10;
        int first = n;
        while(first>=10) {
            first = first/10; }
            if(first == last) {printf("YES\n"); }
            else {printf("NO\n");}

    } return 0;
}