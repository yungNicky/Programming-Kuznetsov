#include <stdlib.h>
#include <time.h>

#define SIZE 3 // Размер матрицы 
void multiplicationMatrix(int arrIn[SIZE][SIZE]); // Преждевременное объявление функции

int main()
{
	srand(time(0));
	
	int matrixIn[SIZE][SIZE]; // Объявление массива матрицы размером SIZE х SIZE
	
	for(int i = 0; i < SIZE; i++) { // Заполнение массива входного массива
		for (int j = 0; j < SIZE; j++) {
			arrIn[i][j] = rand() % 9 + 1; // Заполнение числами в диапазоне от 1 до 9 символов
		}
	}

	multiplicationMatrix(matrixIn);
	
	return 0;
}

void multiplicationMatrix(int arrIn[SIZE][SIZE]){
	int matrixOut[SIZE][SIZE]; // Объявление результирующего массива матрицы 
		
	for(int i = 0; i < SIZE; i++) { // Умножение матрицы саму на себя 
		for (int j = 0; j < SIZE; j++) {
			matrixOut[i][j] = 0;
			for (int k = 0; k < SIZE; k++) {
				matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];
			}
		}
	}
		
}
