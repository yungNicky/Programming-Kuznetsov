int main ()
{
	int num1 = 10; // Первое заданное число
	int num2 = 15; // Второе заданное число
	
		// Через FOR
	int resultFor;
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			resultFor = i;
			break;
		}
	} 
		// Через While
	int resultWhile;
	int j = num1;
	while (j > 0) {
		if (num1 % j == 0 && num2 % j == 0) {
			resultWhile = j;
			break;
		}
		j--;
	}
	
		// Через Do While
	int resultDoWhile;
	int k = num1;
	do {
		if (num1 % k == 0 && num2 % k == 0) {
			resultDoWhile = k;
			break;
		}	
		k--;
	} while (k > 0);
return 0;
}
