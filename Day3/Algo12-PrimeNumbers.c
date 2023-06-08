#include <stdio.h>

int main() {
    int N;
    printf("Enter a numbers for prime terms:");
    scanf("%d",&N);
    
    if (N < 2) {
        printf("Invalid input.");
        return 1;
    }else {
        for (int num = 2; num <= N; ++num) {
            
            int isPrime = 1;
            for (int i = 2; i <= num / 2; ++i) {
                if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d is prime\n",num);
        }
    }
}
    return 0;
}