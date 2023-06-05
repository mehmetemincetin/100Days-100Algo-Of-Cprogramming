#include <stdio.h>

int main() {
    int n,i;
    int first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series:\n");
    
    for (i = 0; i < n ; i++) {
        printf("%d)Term: %d\n",i+1,first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
/*
In this algorithm,I first defined number and i as int.
Then I defined first = 0, second = 1 and next as int.
Then I synchronized next = first + second,first = second,second = next in the for loop
*/
