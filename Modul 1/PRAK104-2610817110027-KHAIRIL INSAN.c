#include <stdio.h>

int main()
{
    float shoesA = 400000;
    float shoesB = 350000;

    printf("Harga sepatu A adalah %.0f\n", shoesA);
    printf("Harga sepatu B adalah %.0f\n", shoesB);
    printf("Sepatu A mendapat diskon 13%% sehingga harga akhirnya adalah %.0f\n", shoesA - (shoesA * 0.13));
    printf("Sepatu B mendapat diskon 21%% sehingga harga akhirnya adalah %.0f\n", shoesB - (shoesB * 0.21));

    return 0;
}