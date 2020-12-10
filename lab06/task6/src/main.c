
#define SIZE 3 // Размер матрицы 

int main()
{
	int matrixIn[SIZE][SIZE]; // Объявление массива матрицы размером SIZE х SIZE
	int matrixOut[SIZE][SIZE]; // Объявление результирующего массива матрицы 
	
	for(int i = 0; i < SIZE; i++) { // Заполнение массива 
		for (int j = 0; j < SIZE; j++) {
			matrixIn[i][j] = i * SIZE + j;
		}
	}
	
	for(int i = 0; i < SIZE; i++) { // Умножение матрицы саму на себя 
		for (int j = 0; j < SIZE; j++) {
			matrixOut[i][j] = 0;
			for (int k = 0; k < SIZE; k++) {
				matrixOut[i][j] += matrixIn[i][k] * matrixIn[k][j];
			}
		}
	}
	
	return 0;
}

