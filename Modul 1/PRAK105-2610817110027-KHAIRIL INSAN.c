#include <stdio.h>

int main()
{
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    printf("Variabel a bernilai 9\n");
    printf("Variabel b bernilai 5\n");
    printf("Variabel x bernilai 8\n");
    printf("Variabel y bernilai 8\n");

    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", a % b + x % y);

    return 0;
}