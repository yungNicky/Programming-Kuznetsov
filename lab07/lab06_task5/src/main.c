#include <stdlib.h>
#include <time.h>

#define SIZE 3 // Размер массива
void movedArray(int arrIn[SIZE][SIZE]); // Преждевременное объявление функции

int main()
{
	srand(time(0));
	
	int arrIn[SIZE][SIZE]; // Объявление входного массива размером SIZE x SIZE
	
	for(int i = 0; i < SIZE; i++) { // Заполнение массива входного массива
		for (int j = 0; j < SIZE; j++) {
			arrIn[i][j] = rand() % 9 + 1; // Заполнение числами в диапазоне от 1 до 9 символов
		}
	}

	movedArray(arrIn);

	return 0;
}

void movedArray(int arrIn[SIZE][SIZE]){
	int arrOut[SIZE][SIZE]; // Объявление результирующего массива 
	for (int j = 0; j < SIZE; j++) { // Сдвиг элементов массива на один знак вправо
		for (int k = 0; k < SIZE; k++) {
			arrOut[j][k] = arrIn[j][k+1];
		}
		arrOut[j][SIZE-1] = arrIn[j][0];
	}

}
