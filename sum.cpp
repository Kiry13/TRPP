# include <iostream>

int main{
    int num1, num2;

    // Запрос пользователю ввода двух чисел
    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Вычисление суммы
    int sum = num1 + num2;

    // Вывод результата
    std::cout << "Сумма чисел: " << sum << std::endl;

    return 0;
}
