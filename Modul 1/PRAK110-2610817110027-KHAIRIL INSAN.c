#include <stdio.h>

int main()
{
    int base = 5;
    int height = 12;
    int perimeter = 30;
    int area = 30;

    printf("Diketahui :\n");
    printf("Panjang alas segitiga adalah %d cm\n", base);
    printf("Tinggi segitiga adalah %d cm\n", height);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", height);
    printf("Sisi B = %d cm\n", perimeter - base - height);
    printf("Sisi C = %d cm\n", base);
    printf("Keliling %d cm\n", perimeter);
    printf("Luas %d cm\n", area);

    return 0;
}