#include <stdio.h>
#include <math.h>

int main(){
    float a, b;

    printf("masukan nilai a : ");
    scanf("%f", &a);
    printf("masukan nilai b : ");
    scanf("%f", &b);

    float c = sqrt(b * b - a * a);
    float keliling = a + b + c;
    float luas = 0.5 * c * a;

printf ("alas = %.0f cm\n", c);
printf ("tinggi = %.0f cm\n", a);
printf  ("keliling = %.0f cm\n", keliling);
printf ("luas = %.0f cm^2\n", luas);

    return 0;
}
