#include <stdio.h>
#include <string.h>
int main () {
    char s[105];
    scanf("%s", s);
    int len = strlen(s);
    int du = len % 3;
    int i=0;
    if (du != 0 ) {
        int val = 0;
        for(; i<du; i++) {
            val = val * 2 + (s[i] - '0');
        }
        printf("%d", val);
    }
    while (i < len) {
        int val = 0;
        for( int j=0; j<3; j++) {
            val = val * 2 +(s[i] - '0');
            i++;
        }
        printf("%d", val);
    }
    printf("\n");
    return 0;
}