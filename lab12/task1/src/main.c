/**
 * @mainpage
 * # Загальне завдання
 * 1. Необхідно виконати завдання стосовно варіанту, обчислений за раніше-визначеною формулою.
 *
 * # Індивідуальне завдання
 * 1. Дано масив з N цілих чисел. Знайти мінімальний та максимальний елементи масиву. Визначити суму елементів, що разташовані між цими елементами. Створити другий масив, що містить ці елементи.
 *
 * @author Kuznetsov M.
 * @date 11-jan-2021
 * @version 1.0
 */

#include "lib.h"

/**
 * Функция {@link main}
 *
 * Последовательность действий:
 * - Выделение памяти 
 * - Заполнение при помощи генерации псевдослучайных чисел
 * - @brief Поиск наименьшего числа
 * {@link minElFounder}
 * - @brief Поиск наибольшего числа
 * {@link maxElFounder}
 * - @brief Сумма чисел 
 * {@link sumOfElements}
 * 
 * @param newSize - новый размер массива
 * @param minElement - минимальный элемент 
 * @param maxElement - максимальный элемент
 * @param sum - сумма чисел
 * 
 * @return Успешное завершение программы (0)
 */ 

int main() {
    srand(time(0));

    print();
	int N;
    printf("Введіть розмір масиву (Ціле число): ");
    scanf("%d", &N);
    // printf("You wrote: %d", N);

	int* arr = (int*)malloc(N * sizeof(int));
    printf("Згенерований масив: ");
	for (size_t i = 0; i < N; i++) {
		*(arr + i) = rand() % 50 + 1;
		printf("%d ", arr[i]); // Ввывод массива
	}
	unsigned int minElement = minElFounder(arr, N);
	unsigned int maxElement = maxElFounder(arr, N);
	unsigned int start = minElement < maxElement ? minElement : maxElement;
	unsigned int end = minElement < maxElement ? maxElement : minElement;
	int newSize = (end - start);
	
	int* newArr = (int*)malloc(newSize * sizeof(int));

	sumOfElements(arr, newArr, newSize, start, end, N);

    char mark;
    printf("Задоволені роботою програми? (yes/no): ");
    scanf("%s", &mark);
    // gets(mark);

	free(arr);
	free(newArr);
	return 0;
}
