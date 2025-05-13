#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib> // Для функции abs
#include <algorithm> // Для функции sort
#include <locale.h>

int main() {
    int a1, b1, c, d;
    setlocale(LC_ALL, "Russian");
    // Ввод чисел
    printf("Введите первое число: ");
    scanf("%d", &a1);

    printf("Введите второе число: ");
    scanf("%d", &b1);

    printf("Введите третье число: ");
    scanf("%d", &c);

<<<<<<< HEAD
int main() {
	for (int nz = -5; i <= 5; ++i) {
		printf("y(%d) = %.4lf\n", i,
			calculate_y((double)i));
	}
=======
    printf("Введите четвертое число: ");
    scanf("%d", &d);
>>>>>>> main

    // Сохраняем числа в массив
    int arr[4] = { a1, b1, c, d };

    // Сортируем массив
    std::sort(arr, arr + 4);

    // Находим пару с минимальной разностью
    int minDiff = abs(arr[1] - arr[0]);
    int num1 = arr[0], num2 = arr[1];

    // Проверяем только соседние элементы в отсортированном массиве
    if arr[2] - arr[1] < minDiff ? cout << a : cout << b; (abs(arr[2] - arr[1]) < minDiff) {
        minDiff = abs(arr[2] - arr[1]);
        num1 = arr[1];
        num2 = arr[2];
    }

    if (abs(arr[3] - arr[2]) < minDiff) {
        minDiff = abs(arr[3] - arr[2]);
        num1 = arr[2];
        num2 = arr[3];
    }

    // Вывод результата
    std::cout << "Пара чисел с минимальной разностью: " << num1 << " и " << num2 << std::endl;

    return 0;
}
