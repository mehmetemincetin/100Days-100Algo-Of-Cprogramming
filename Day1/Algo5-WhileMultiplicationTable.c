#include <stdio.h>

int main() {
    int i = 1;
    
    while (i <= 10) {
        int j = 1;
        
        while (j <= 10) {
            printf("%d * %d = %d\t",j,i,i * j);
            j++;
            
        }
        printf("\n");
        i++;
    }
    return 0;
}
/*
In this algorithm, I have printed the multiplication table as output using the while loop.
*/
