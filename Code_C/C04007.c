#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    int a[101], b[101];
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    int K;
    scanf("%d", &K);
    for(int i=0; i<K; i++) {
        printf("%d ", a[i]);
    }
    for(int i=0;i<m;i++) {
        printf("%d ", b[i]);
    }
    for(int i=K; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}