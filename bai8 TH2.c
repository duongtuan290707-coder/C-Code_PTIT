#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n,m;
        scanf("%d %d", &n,&m);
        int a[105][105];
        int hang[105] = {0};
        int cot[105]={0};
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                scanf("%d", &a[i][j]);
                if(a[i][j] == 1) {
                    hang[i] =1;
                    cot[j] =1;
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m;j++) {
                if(hang[i]==1 || cot[j] ==1) {
                    printf("1 ");
                } else {
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}