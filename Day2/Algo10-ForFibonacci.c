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