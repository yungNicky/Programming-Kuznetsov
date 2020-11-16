#define NUM 6 // Заданное число

int main()
{
		// Через For
	int sumFor = 0;
	int resultFor;
	int tempFor;
	for (int i = 1; i < NUM; i++) {
		tempFor = NUM % i;
		if (tempFor == 0) {
			sumFor += i;
		}
	} 
	if (sumFor == NUM) {
		resultFor = 0; // 0 - Число совершенное 
	} else if (sumFor != NUM) {
		resultFor = 1; // 1 - Число не совершенное
	}
		// Через While
	int sumWhile = 0;
	int resultWhile;
	int tempWhile;
	int j = 1;
	while (j < NUM) {
		tempWhile = NUM % j;
		if (tempWhile == 0) {
			sumWhile += j;
		}
		j++;
	}
	if (sumWhile == NUM) {
		resultWhile = 0; // 0 - Число совершенное
	} else if (sumWhile != NUM) {
		resultWhile = 1; // 1 - Число не совершенное
	}
		// Через Do While
	int sumDoWhile = 0;
	int resultDoWhile;
	int tempDoWhile;
	int k = 1;
	do {
		tempDoWhile = NUM % k;
		if (tempDoWhile == 0) {
			sumDoWhile += k;
		}
		k++;
	} while (k < NUM);
	if (sumDoWhile == NUM) {
		resultDoWhile = 0; // 0 - Число совершенное
	}else if (sumDoWhile != NUM) {
		resultDoWhile = 1; // 1 - Число не совершенное
	}
	return 0;
}
