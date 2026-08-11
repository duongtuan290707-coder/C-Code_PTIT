#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    int dem[1000] = {0};
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        dem[a[i]]++;
    }
    for(int i=0; i<n; i++) {
        if(dem[a[i]]>1)
        printf("%d ", a[i]);
        dem[a[i]] = 0;
    }
    return 0;
}