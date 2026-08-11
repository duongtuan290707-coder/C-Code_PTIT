#include <stdio.h>
int main() {
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    for (int i = 1; i <= hang; i++) {
        int count = 0;
        if (i <= cot) {
            for (int j = i; j <= cot; j++) {
                printf("%d", j);
                count++; 
            }
        } else {
            printf("%d", i);
            count++;
        }
        int j_lui;
        if (i < cot) {
            j_lui = i - 1; 
        } else {
            j_lui = cot - 1; 
        }
        
        // Điền bù các số lùi cho đủ số lượng cột
        while (count < cot) {
            printf("%d", j_lui);
            j_lui--;  
            count++;  
        }
        
        printf("\n");
    }

    return 0;
}