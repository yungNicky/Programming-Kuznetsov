/**
 * @file lib.c
 * @brief Файл с реализацией всех функций
 * 
 * @author Kuznetsov M.
 * @date 11-jan-2020
 * @version 1.0
 */

#include "lib.h"

int minElFounder(int* arr) {

	int min = *arr;
	int minElementArr = 0;
	
	for (size_t i = 0; i < N; i++) {
		if (*(arr + i) < min) {
			min = *(arr + i);
			minElementArr = i;
		}
	}
	
	return minElementArr;
}

int maxElFounder(int* arr) {
	
	int max = *arr;
	int maxElementArr = 0;
	
	for (size_t i = 0; i < N; i++) {
		if (*(arr + i) > max) {
			max = *(arr + i);
			maxElementArr = i;
		}
	}
	
	return maxElementArr;
}

void sumOfElements (int* arrIn, int* arrOut, int newSize, int start, int end, int* sum) {
	
	int i = 0;
	for (size_t j = start; j < end; j++, i++) {
		*(arrOut + i) = *(arrIn + j);
	}
	
	for (size_t i = 0; i < newSize; i++) {
		*sum += *(arrOut + i);
	}
}
