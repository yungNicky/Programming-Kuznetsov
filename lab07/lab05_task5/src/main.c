#include <stdlib.h>
#include <time.h>

int root_for(int num); // Преждевременное объявление функции
int root_while(int num); // Преждевременное объявление функции
int root_dowhile(int num); // Преждевременное объявление функции

int main() 
{
	srand(time(0));	
	int num = rand() % 100 + 1; // Заданное число (Диапазон генерации псевдослучайного числа от 1 до 100)
	
		// Через FOR
	int rootResultFor = root_for(num);

		// Через While
	int rootResultWhile = root_while(num);

		// Через Do While
	int rootResultDoWhile = root_dowhile(num);
	
return 0;
}

int root_for(int num) {
	int resultFor = 0;
	for (int i = 0; i*i <= num; i++) {
		resultFor = i;
	}
	return resultFor;	
	
}

int root_while(int num) {
	int resultWhile = 0;
	int i = 0;
	while (i*i <= num) {
		i++;
		resultWhile = i - 1;
	}
	return resultWhile;	
}

int root_dowhile(int num) {
	int resultDoWhile = 0;
	int j = 0;
	do {
		j++;
		resultDoWhile = j - 1;
	} while (j * j <= num);
	return resultDoWhile;
}
