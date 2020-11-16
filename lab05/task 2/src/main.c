#define NUM 11 // Заданное число

int main ()
{
		// Через FOR
	int resultFor = 0;
	
	for (int i = 2; i <= NUM; i++) {
		if (NUM % i == 0) {
			resultFor = 1; // 1 - Число не простое
		}
	}
		// Через While
	int resultWhile = 0;
	int i = 2;
	
	while (i < NUM) {
		if (NUM % i == 0) {
			resultWhile = 1; // 1 - Число не простое
		}
	}
		// Через Do While
	int resultDoWhile = 0;
	int j = 2;
	
	do {
		if (NUM % j == 0) { 
			resultDoWhile = 1; // 1 - Число не простое
		}
		i++;
	} while (j < NUM);
return 0;
}
