#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
    int n;
    scanf("%d", &n);
    int a[51];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
        int count = 0;
        int ky_luc_max = -1; 
        for (int i = 0; i < n; i++) {
            if (a[i] >= ky_luc_max) {
                count++;             
                ky_luc_max = a[i];   
            }
        }
        printf("%d\n", count);
        }
    return 0;
}