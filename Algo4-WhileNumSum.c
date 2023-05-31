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