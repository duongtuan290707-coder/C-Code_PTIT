#include <stdio.h>
int main() {
    int n,minn;
    minn=1000000;
    while(scanf("%d", &n)==1) {
        if(minn>n) minn=n;
    }
    printf("%d", minn);
    return 0;
}