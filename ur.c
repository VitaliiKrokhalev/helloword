#include <math.h>
#include <stdio.h>
#include <stdlib.h>

 
void urav()
{
    int a;
    int b;
    int c;
    int x;
    printf ("Введите значение a: ");
    scanf ("%d", &a);
    printf ("Введите значение b: ");
    scanf  ("%d", &b);
    printf ("Введите значение c: ");
    scanf ("%d", &c);
    if((b*b - 4*a*c) >= 0) //Если дискриминант больше или равен 0
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        printf ("Первый корень: %d \n", x);  
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        printf ("Второй корень: %d \n", x);
    }
    else
    {
        printf ("Дискриминант меньше 0, корни невещественные.");
    }
    return 0;
}
