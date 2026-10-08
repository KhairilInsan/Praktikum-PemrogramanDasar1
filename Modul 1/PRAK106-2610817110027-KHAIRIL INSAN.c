#include <stdio.h>

int main()
{
    int a = 4;
    int b = 8;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah %d sama dengan %d ? jawabannya adalah %d\n", a, b, a == b);
    printf("Apakah %d lebih besar dari %d ? jawabannya adalah %d\n", b, c, b > c);
    printf("Apakah %d tidak sama dengan %d ? jawabannya adalah %d\n", a, c, a != c);

    return 0;
}