#include <stdio.h>
#include <string.h>
int kiemTraSoDep(char s[]) {
    int len = strlen(s);
    for (int i = 0; i <= len / 2; i++) { 
        if (s[i] != s[len - 1 - i]) {
            return 0; 
        }
        if ((s[i] - '0') % 2 != 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[505];
        scanf("%s", s); 
        if (kiemTraSoDep(s) == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}