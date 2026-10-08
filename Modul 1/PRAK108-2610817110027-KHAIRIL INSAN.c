#include <stdio.h>
#include <math.h>

int main()
{
    float loops = 5;
    float permeter = 14;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", loops);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", permeter);
    printf("\n");
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", permeter / (2 * M_PI * loops));

    return 0;
}