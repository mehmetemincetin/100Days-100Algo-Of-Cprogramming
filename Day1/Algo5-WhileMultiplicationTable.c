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
In this algorithm, the user adds the numbers entered until press 0, and when the user presses 0,
the algorithm ends and the sum of all the numbers entered on the screen is printed.
*/
