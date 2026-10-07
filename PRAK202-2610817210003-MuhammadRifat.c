#include <stdio.h>

int main(){
    float val1, val2;

    printf("Masukan nilai pertama : ");
    scanf("%f", &val1);

    printf("Masukan nilai kedua : ");
    scanf("%f", &val2);

    float hasil = val1 + val2;
    printf("hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", val1, val2, hasil);

    return 0;
}
