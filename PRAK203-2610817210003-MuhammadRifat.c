#include <stdio.h>

int main(){
    float a, b, i, j, x, y;

    printf("nilai A : ");
    scanf("%f", &a);
    printf("nilai B : ");
    scanf("%f", &b);
    printf("nilai I : ");
    scanf("%f", &i);
    printf("nilai J : ");
    scanf("%f", &j);
    printf("nilai X : ");
    scanf("%f", &x);
    printf("nilai Y : ");
    scanf("%f", &y);

    float result = (((a - b) * i) / j) - (x + y);

    printf("%.3f\n", result);

    return 0;
}