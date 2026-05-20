#include <stdio.h>
#include <string.h>
int main () {
    char s[1000];
    scanf("%[^\n]", s);
    int chuso=0;
    int chucai=0;
    int khac=0;
    int len = strlen(s);
    for(int i=0; i<len; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            chucai++;
        } 
        
        else if (s[i] >= '0' && s[i] <= '9') {
            chuso++;
        } 
        
        else {
            khac++;
        }
    }
    printf("%d %d %d\n", chucai, chuso, khac);
    
    return 0;
}