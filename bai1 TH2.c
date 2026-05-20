#include <stdio.h>
char quydoi( int r) {
    if(r,10) {
        return r + '0' ;
    } else {
        return (r-10) + 'A';
    }
}
void chuyencoso (int n, int b) {
    if(n==0) {
        printf("0\n");
        return;
    }
    char kq[100];
    int idx = 0;
    while(n>0) {
        int phandu=n%b;
        if (phandu<10) {
            kq[idx] = phandu + '0';
        } else {
            kq[idx] = (phandu -10) + 'A';
        }
        
        idx++;
        n= n/b;
    }
    for( int i= idx -1; i >=0; i--) {
        printf("%c", kq[i]);
    }
    printf("\n");
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n,b;
        scanf("%d %d", &n, &b);
        chuyencoso(n,b);
    }
    return 0;
}