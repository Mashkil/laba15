#include <stdio.h>

float rings(float r1, float r2) { // Функция для вычисления площади кольца
    return 3.14 * (r1 * r1 - r2 * r2);
}

int main(void)
{
    int i;
    for (i = 1; i <= 3; ++i) {  // Создаем цикл для расчета площади 3 различных колец
        float r1, r2; // Объявляем переменные и реализуем ввод для пользователя
        printf("R1:");
        scanf_s("%f", &r1);
        printf_s("R2:");
        scanf_s("%f", &r2);
        printf_s("S:%f\n", rings(r1, r2)); // Выводим результат
    }
    return 0;
}
