
#define SIZE 3 // Размер массива

int main()
{
	int arrIn[SIZE][SIZE]; // Объявление входного массива размером SIZE x SIZE
	int arrOut[SIZE][SIZE]; // Объявление результирующего массива 
	
	for(int i = 0; i < SIZE; i++) { // Заполнение массива 
		for (int j = 0; j < SIZE; j++) {
			arrIn[i][j] = i * SIZE + j;
		}
	}	
	
	for (int j = 0; j < SIZE; j++) { // Сдвиг элементов массива на один знак вправо
		for (int k = 0; k < SIZE; k++) {
			arrOut[j][k] = arrIn[j][k+1];
		}
		arrOut[SIZE-1][SIZE-1] = arrIn[0][0];
	}
	
	return 0;
}

