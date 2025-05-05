// 1 бригада из 24ввв4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <math.h>

double calculate_y(double x) {
	// Функция рассчитывает значение y по формуле y = sqrt(2*x) + sin(|3*x|)/3.56
	double root_part = sqrt(2 * x);
	double absolute_value = fabs(3 * x);
	double sine_part = sin(absolute_value);

	return root_part + sine_part/ 3.56;
}

int main() {
	for (int i = -5; i <= 5; ++i) {
		printf("y(%d) = %.4lf\n", i,
			calculate_y((double)i));
	}

	return 0;
}


