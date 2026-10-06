#include <stdio.h>

int main(){
    float r, t;

    printf("masukkan nilai jari-jari : ");
    scanf("%f", &r);
    printf("masukkan nilai tinggi bejana : ");
    scanf("%f", &t);

    double pi = 22.0 / 7.0;
    double volume = pi * r * r * t;
    double luas = 2 * pi * r * (r + t);
    double kelilling = 2 * pi * r;

    printf("volume = %.2f\n", volume);
    printf("luas = %.2f\n", luas);
    printf("kelilling = %.2f\n", kelilling);

    return 0;
}