#include <stdio.h>
#include <math.h>
int main() {
    int m,n;
        scanf("%d %d", &m, &n);
    int start = sqrt(m);
    if (start * start < m) {
        start++;
    }
    int end = sqrt(n);
    int count = end - start + 1;
    printf("%d\n", count);
    for( int i=start; i<=end; i++) {
        printf("%d\n", i*i);
    }
    return 0;
    }
