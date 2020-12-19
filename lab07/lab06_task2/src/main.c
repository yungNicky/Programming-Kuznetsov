#include <stdlib.h>
#include <time.h>

void arrWithPrimeNum(int arrSize, int limit); // Преждевременное объявление функции

int main()
{
	srand(time(0));
	
	int arrSize = rand() % 45 + 15; // Размер массива в диапазоне от 15 до 45 символов
	int limit = 100; // Диапазон поиска простых чисел

	arrWithPrimeNum(arrSize, limit);
	
	return 0;
}

void arrWithPrimeNum(int arrSize, int limit) {
	int arrResult[arrSize]; // Объявление массива размером arrSize	
	int i,j,check;
	int k = 0; 
	for (int i = 2; i < limit; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				check = 1;  // Если check = 1 - число не простое
				break;
			} else {
				check = 0;	// Если check = 0 - число простое
			}
		}
		if (check == 0) { // Число простое - записываем его в массив, если число не простое - пропускаем
			arrResult[k] = i;
			k++;
		}
	}
}
