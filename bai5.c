#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int test=1; test<=t; test++) {
    int n,m,p;
    int a[101];
    int b[101];
    scanf("%d %d %d", &n, &m, &p);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    printf("Test %d:\n", test);
    for(int i=0; i<p; i++) {
        printf("%d ", a[i]);
    }
    for(int i=0; i<m; i++) {
        printf("%d ", b[i]);
    }
    for(int i=p; i<n; i++) {
        printf("%d ", a[i]);
    } 
    printf("\n");}
    return 0;
}