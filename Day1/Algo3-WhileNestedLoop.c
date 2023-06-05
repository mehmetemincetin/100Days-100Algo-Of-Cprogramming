#include <stdio.h>

int main() {
    int i = 1;
    
    while (i <= 3) {
        int j = 1;
        while (j <= 3) {
        printf("%d %d \n",i,j);
        j++;
    }
    i++;
 }
  return 0;
}
/*Bu kodda int j ifadesini int i ifadesinin hemen altina yazdığımda
program ikinci while kontrol ettirecekken üstünde sorgu yapabileceği
int j ifadesini görmediği için 3 defa çalışıp sona eriyor.
*/


