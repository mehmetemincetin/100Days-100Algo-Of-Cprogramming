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
/*
In this algorithm,I first defined the number and reverse variables as int.
Then I got the number from the user Then I using while loop
reversed = reversed * 10 + num % 10, num = num / 10.
Then I printed on the screen
*/
