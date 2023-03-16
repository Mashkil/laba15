#include <stdio.h>

void PowerA3(float A, float* B) //Создаем функцию для вычисления 3 степени числа a
{
    *B = A * A * A;
}

int main()
{ // Создаем цикл для расчёта третьей степени для 5 чисел
    for (int i = 1; i <= 5; ++i) {
        float A;
        printf("A:");
        scanf_s("%f", &A);
        float B;
        PowerA3(A, &B);
        printf_s("B: %f\n", B); // Выводим результат
    }
    return 0;
}
