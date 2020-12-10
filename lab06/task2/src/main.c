
#define ARRSIZE 30 // Размер массива

int main()
{
	int arrResult[ARRSIZE]; // Объявление массива размером ARRZISE
	int limit = 100; // Диапазон поиска простых чисел
	int i,j,check,k; 
	
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
	
	return 0;
}

