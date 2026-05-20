#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[25];
        scanf("%s", s);
    int dem[10]={0};
    int len=strlen(s);
    for(int i=0; i<len; i++) {
        int conso = s[i] - '0';
        dem[conso]++;
    }
    for( int i=1; i<=9; i++) {
        for(int j=0; j<dem[i]; j++) {
            printf("%d", i);
        }
    }
    printf("\n");
    }
    return 0;
}