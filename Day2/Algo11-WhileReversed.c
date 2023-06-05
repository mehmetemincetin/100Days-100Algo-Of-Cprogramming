#include <stdio.h>
int main() {
    int num,reversed;
    
    printf("Enter the number you want to reverse: ");
    scanf("%d",&num);
    
    while(num != 0) {
        reversed = reversed * 10 + num % 10 ;
        num = num / 10;
    }
    printf("The reverse of the number you entered: %d",reversed);
    return 0;
}