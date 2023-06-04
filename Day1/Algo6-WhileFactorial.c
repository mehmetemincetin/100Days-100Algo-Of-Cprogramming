#include <stdio.h>

int main() {
    int sayi;
    int faktoriyel = 1;
    
    printf("Faktöryelini almak istediğiniz sayıyı giriniz: ");
    scanf("%d",&sayi);
    
    int i = 1;
    while (i <= sayi) {
        faktoriyel *= i;
        i++;
        
    }
    printf("Sayının faktöryel değeri %d! = %d\n",sayi,faktoriyel);
    return 0;
}
/*
--As a summary--
In this algorithm, I printed the factorial value of the number I received from the user as an output on the screen.
*/
