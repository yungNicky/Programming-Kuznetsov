#include <stdlib.h>
#include <time.h>

int perfectnum_for(int num); // Преждевременное объявление функции
int perfectnum_while(int num); // Преждевременное объявление функции
int perfectnum_dowhile(int num); // Преждевременное объявление функции

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
