#define NUM 25 // Заданное чисо

int main() 
{
		// Через FOR
	int resultFOr = 0;
	for (int i = 0; i*i <= NUM; i++) {
		resultFOr = i;
	}
		// Через While
	int resultWhile = 0;
	int i = 0;
	while (i*i <= NUM) {
		i++;
		resultWhile = i - 1;
	}
		// Через Do While
	int resultDoWhile;
	int j = 0;
	do {
		j++;
		resultDoWhile = j - 1;
	} while (j * j <= NUM);
return 0;
}
