#include <stdlib.h>
#include <time.h>

int prime_for(int num); // Преждевременное объявление функции
int prime_while(int num); // Преждевременное объявление функции
int prime_dowhile(int num); // Преждевременное объявление функции

int main ()
{
	srand(time(0));
	
	int num = rand() % 99 + 1; // Диапазон генерации псевдослучайного числа от 1 до 99
	  
		// Через FOR
	int resultFor = prime_for(num); // Если resultFor = 0 - число простое
	
		// Через While
	int resultWhile = prime_while(num); // Если resultWhile = 0 - число простое
	
		// Через Do While
	int resultDoWhile = prime_dowhile(num); // Если resultDoWhile = 0 - число простое

return 0;
}

int prime_for(int num) {
	int primeFor = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			primeFor = 1; // 1 - Число не простое
		}
	}
	return primeFor;
}

int prime_while(int num) {
	int primeWhile = 0;
	int i = 2;
	while (i < num) {
		if (num % i == 0) {
			primeWhile = 1; // 1 - Число не простое
		}
		i++;
	}
	return primeWhile;
}

int prime_dowhile(int num) {
	int primeDoWhile = 0;
	int j = 2;
	do {
		if (num % j == 0) { 
			primeDoWhile = 1; // 1 - Число не простое
		}
		j++;
	} while (j < num);	
	return primeDoWhile;	
}
