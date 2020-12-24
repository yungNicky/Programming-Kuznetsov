/**
 * @mainpage
 * # Загальне завдання
 * 1. **Переробити** програми, що були розроблені під час виконання лабораторних робіт з тем "Масиви" та "Цикли" таким чином, щоб 
 * використовувалися функції для обчислення результату.
 *
 * # Індивідуальне завдання
 * **Визначити**, чи є задане число досконалим (якщо воно дорівнює сумі своїх дільників). Наприклад, 6 - досконале число, бо 6 = 1 + 2 + 3.
 *
 * @author Kuznetsov M.
 * @date 18-dec-2020
 * @version 1.0
 */

#include <stdlib.h>
#include <time.h>

int perfectnum_for(int num); // Преждевременное объявление функции
int perfectnum_while(int num); // Преждевременное объявление функции
int perfectnum_dowhile(int num); // Преждевременное объявление функции

/**
 * Функция {@link main}
 *
 * Последовательность действий:
 * - Вызов функции для генерации псевдослучайных чисел
 * - Генерация числа для переменной
 * - @brief Вычисления результата через цикл FOR с помощью функции
 * {@link perfectnum_for}
 * - @brief Вычисления результата через цикл WHILE с помощью функции
 * {@link perfectnum_while}
 * - @brief Вычисления результата через цикл DoWHILE с помощью функции
 * {@link perfectnum_dowhile}
 *
 * @param num - Заданное число
 * @param pefrectnumResultFor - Результат цикла for
 * @param perfectnumResultWhile - Результат цикла while
 * @param perfectnumResultDoWhile - Результат цикла do while
 * 
 * @return Успешное завершение программы (0)
 */

int main()
{
	srand(time(0));	
	int num = rand() % 99 + 1; // Заданное число (Диапазон генерации псевдослучайного числа от 1 до 99)
	
		// Через For
	int pefrectnumResultFor = perfectnum_for(num); // Если pefrectnumResultFor = 0 - Число совершенное
	
		// Через While
	int perfectnumResultWhile = perfectnum_while(num); // Если perfectnumResultWhile = 0 - Число совершенное

		// Через Do While
	int perfectnumResultDoWhile = perfectnum_dowhile(num); // Если perfectnumResultDoWhile = 0 - Число совершенное

	return 0;
}

/**
 * Функция {@link perfectnum_for}
 *
 * Последовательность действий:
 * - Находим сумму числа всех своих собственных делителей
 * - Сравниваем полученную сумму с заданным числом
 *
 * Переменные:
 * @param sumFor - Для записи суммы
 * @param resultFor - Для записи результата (0 - Число совершенное, 1 - не совершенное)
 * @param tempFor - Временная переменная для записи
 * 
 * @return результат (resultFor)
 */

int perfectnum_for(int num) {
	int sumFor = 0;
	int resultFor;
	int tempFor;
	for (int i = 1; i < num; i++) {
		tempFor = num % i;
		if (tempFor == 0) {
			sumFor += i;
		}
	} 
	if (sumFor == num) {
		resultFor = 0; // 0 - Число совершенное 
	} else if (sumFor != num) {
		resultFor = 1; // 1 - Число не совершенное
	}
	return resultFor;
}

/**
 * Функция {@link perfectnum_while}
 *
 * Последовательность действий:
 * - Находим сумму числа всех своих собственных делителей
 * - Сравниваем полученную сумму с заданным числом
 *
 * @param sumWhile - Для записи суммы
 * @param resultWhile - Для записи результата (0 - Число совершенное, 1 - не совершенное)
 * @param tempWhile - Временная переменная для записи
 * 
 * @return результат (resultWhile)
 */

int perfectnum_while(int num) {
	int sumWhile = 0;
	int resultWhile;
	int tempWhile;
	int j = 1;
	while (j < num) {
		tempWhile = num % j;
		if (tempWhile == 0) {
			sumWhile += j;
		}
		j++;
	}
	if (sumWhile == num) {
		resultWhile = 0; // 0 - Число совершенное
	} else if (sumWhile != num) {
		resultWhile = 1; // 1 - Число не совершенное
	}	
	return resultWhile;
}

/**
 * Функция {@link perfectnum_dowhile}
 *
 * Последовательность действий:
 * - Находим сумму числа всех своих собственных делителей
 * - Сравниваем полученную сумму с заданным числом
 *
 * @param sumDoWhile - Для записи суммы
 * @param resultDoWhile - Для записи результата (0 - Число совершенное, 1 - не совершенное)
 * @param tempDoWhile - Временная переменная для записи
 * 
 * @return результат (resultDoWhile)
 */

int perfectnum_dowhile(int num) {
	int sumDoWhile = 0;
	int resultDoWhile;
	int tempDoWhile;
	int k = 1;
	do {
		tempDoWhile = num % k;
		if (tempDoWhile == 0) {
			sumDoWhile += k;
		}
		k++;
	} while (k < num);
	if (sumDoWhile == num) {
		resultDoWhile = 0; // 0 - Число совершенное
	}else if (sumDoWhile != num) {
		resultDoWhile = 1; // 1 - Число не совершенное
	}
	return resultDoWhile;	
	
}
