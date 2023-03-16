#include <iostream>

float Fact2(unsigned int n) { // Создаем функцию по заданным условиям
    int fact_double = 1;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2)
            fact_double *= i;
    }

    else {
        for (int i = 1; i <= n; i += 2)
            fact_double *= i;
    }
    return fact_double;
}

int main() {
    int n;

    std::cin >> n;
    std::cout << Fact2(n); // Вызываем функцию и выводим результат.
    return 0;
}
