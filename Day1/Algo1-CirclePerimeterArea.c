
#include <stdio.h>
#define PI 3.14159
int main() {
    char ch;
    float R;
    
    printf("Please enter a radius value: ");
    scanf("%f",&R);
    
    printf("Please select the action you want to do: ");
    scanf(" %c",&ch);
    
    switch(ch) {
        case 'a': printf("Area of Circle: %.2f\n",PI * R * R); break;
        case 'p': printf("Perimeter of Circle: %.2f\n",PI * 2 * R); break;
        case 'v': printf("Volume of Circle: %.2f\n",4/3 * PI * R * R * R); break;
        default:  printf("Invalid input."); break;
    }
    
    return 0;
}
/*
**Özet**
----Yarıçapı kullanıcıdan alınan dairenin alanı,çevresini veren C Programı----
Burada define yani önişlemci direktifi olarak türkçeye geçen kavram aslında bir sabitin tanımlanmasında görev alır
#define PI 3.14159
#define MAX_VALUE 100
#define MESSAGE "Hello, world!"
#define SUM(a, b) ((a) + (b))
#define SEMBOLIK_AD deger
şeklinde kullanımları mevcuttur yani sembolik ad ve sonra da değer şeklinde tanımlanır.
*/
