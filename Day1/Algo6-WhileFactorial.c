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
