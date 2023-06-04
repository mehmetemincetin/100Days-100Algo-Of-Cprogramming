#include <stdio.h>

int main() {
    int sayi = 1;
    int toplam = 0;
    
    while (sayi != 0) {
        printf("Bir sayi girin (Çıkmak için 0'a basın):") ;
        scanf("%d",&sayi);
        toplam += sayi;
    }
    printf("Girilen sayıların toplamı: %d\n",toplam);
    return 0;
}
/*
In this algorithm, the user adds the numbers entered until press 0, and when the user presses 0,
the algorithm ends and the sum of all the numbers entered on the screen is printed.
*/
