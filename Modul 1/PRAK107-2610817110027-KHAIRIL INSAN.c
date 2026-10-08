#include <stdio.h>

int main()
{
    float sideA = 4;
    float sideB = 5;
    float sideC = 7;
    float pricePerMeter = 85000;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %.0f, %.0f, dan %.0f\n", sideA, sideB, sideC);
    printf("Keliling Tanah Pak Dengklek adalah %.0f\n", sideA + sideB + sideC);
    printf("Harga tanah Per Meter adalah %.0f\n", pricePerMeter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %.0f\n", (sideA + sideB + sideC) * pricePerMeter);

    return 0;
}