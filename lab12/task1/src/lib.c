/**
 * @file lib.c
 * @brief Файл с реализацией всех функций
 * 
 * @author Kuznetsov M.
 * @date 11-jan-2020
 * @version 1.0
 */

#include "lib.h"

void print() {
    fwrite("date: 01.03.21", sizeof(char), 15, stdout);
    printf("\n Лабораторна робота №12. Взаємодія з користувачем шляхом механізму введення/виведення \n");
    char author[] = "Разробник: Кузнецов Микита, група: КІТ-320 \n \n";
    puts(author);
    char flag;
    printf("Для продовження роботи натисніть 'Y' та <ENTER>, для завершення роботи натисніть - 'N': ");
    scanf("%c", &flag);
    if (flag == 'N'|| flag == 'n') {
        printf("Завершення роботи... \n");
        exit(0);
    }
    if (flag == 'Y' || flag == 'y') {
        printf("Продовження роботи... \n");
    } else {
        printf("Спробуйте ще раз \n");
        exit(1);
    }

}

int minElFounder(int* arr, int N) {

	int min = *arr;
	int minElementArr = 0;
	
	for (size_t i = 0; i < N; i++) {
		if (*(arr + i) < min) {
			min = *(arr + i);
			minElementArr = i;
		}
	}

	printf("\nНомер найменшого елемента масиву: %d \n", minElementArr);
	return minElementArr;
}

int maxElFounder(int* arr, int N) {
	
	int max = *arr;
	int maxElementArr = 0;
	
	for (size_t i = 0; i < N; i++) {
		if (*(arr + i) > max) {
			max = *(arr + i);
			maxElementArr = i;
		}
	}

    printf("Номер найбільшого елемента масиву: %d \n", maxElementArr);
	return maxElementArr;
}

void sumOfElements (int* arrIn, int* arrOut, int newSize, int start, int end, int N) {

    int sum = 0;
	int i = 0;
	printf("Вихідний масив: ");
	for (size_t j = start; j < end; j++, i++) {
		*(arrOut + i) = *(arrIn + j);
        printf("%d ", arrOut[i]); // Ввывод массива
	}
	
	for (size_t i = 0; i < newSize; i++) {
		sum += *(arrOut + i);
	}
    printf("\nСума елементів масиву: %d \n", sum);
}