#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int temp =n;
    while(temp>9) {
        temp = temp /10;
    }
    printf("%d ", temp);
     printf("%d", n%10);
     return 0;
}