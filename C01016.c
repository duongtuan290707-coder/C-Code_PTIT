#include <stdio.h>
int main() {
    int n;
    do {
        scanf("%d", &n);
    }
    while ( n < 1 || n > 9);
    for (int i = 1; i <= 10; i++) {
        printf("%d ", n * i);
    }
    printf("\n");
    return 0;
}