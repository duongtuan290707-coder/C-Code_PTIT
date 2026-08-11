#include <stdio.h>
#include <string.h>
int main() {
    char s1[105];
    scanf("%[^\n]", s1);
    char s2[105];
    scanf("%s", s2);
    char *tu = strtok(s1, " \t");
    while(tu != NULL) {
        if (strcmp(tu, s2) != 0) {
            printf("%s ", tu);
        } 
        tu = strtok(NULL," \t");
    }
    return 0;
}