#include <stdio.h>

int quarter(float x, float y) { // Создаем функцию для определения номера координатной четверти
    if ((x > 0) && (y > 0))
        return 1;
    if ((x < 0) && (y > 0))
        return 2;
    if ((x < 0) && (y < 0))
        return 3;
    if ((x > 0) && (y < 0))
        return 4;
}

int main(void)
{
    int i;
    for (i = 1; i <= 3; ++i) { // Создаем цикл для определения номера координатной четверти три раза.
        float x, y;
        printf("X:");
        scanf_s("%f", &x);
        printf_s("Y:");
        scanf_s("%f", &y);
        printf_s("Quarter:%i\n", quarter(x, y));
    }
    return 0;
}
