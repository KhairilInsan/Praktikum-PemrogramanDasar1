#include <stdio.h>

int main()
{
    float troops = 958730;
    float hero = 5;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.0f\n", troops);
    printf("Jumlah pahlawan = %.0f\n", hero);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.0f pasukan\n", troops / hero);

    return 0;
}