#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n,m, i_input;
        scanf("%d %d %d", &n,&m,&i_input);
        int a[105][105];
        for(int row=0; row<n; row++) {
            for(int col=0; col<m; col++) {
                scanf("%d", &a[row][col]);
            }
        }
        int col_target=i_input-1;
        for(int r1=0; r1<n-1; r1++) {
            for(int r2 = r1 + 1; r2 < n; r2++) {
                if(a[r1][col_target] > a[r2][col_target]) {
                    int temp = a[r1][col_target];
                    a[r1][col_target] = a[r2][col_target];
                    a[r2][col_target] = temp;
                }
            }
        } 
        for(int row=0; row<n; row++) {
            for (int col=0; col<m; col++) {
                printf("%d ", a[row][col]);
            }
            printf("\n");
        }
    }
    return 0;
}