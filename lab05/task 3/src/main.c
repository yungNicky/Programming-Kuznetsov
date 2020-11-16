
#define NUM 123321 // Номер билета
int main()
{
	int sumfirstnum = 0;
	int sumlastnum = 0;
	int firsthalf = NUM / 1000;
		// Через for
	for (int a = 1000; (NUM / a) > 0; a *= 10) {
		sumfirstnum += NUM / a % 10;
	}
	for (int b = 1; (firsthalf / b) > 0; b *= 10) {
		sumlastnum += NUM / b % 10;
	}
	
		// Через WHILE
	int sumfirstnumWhile = 0;
	int sumlastnumWhile = 0;	
	
	int a = 1000;
	int b = 1; 
	
	while ((NUM / a) > 0) { 
		sumfirstnumWhile += NUM / a % 10;
		a *= 10;
	}
	while ((firsthalf / b) > 0) {
		sumlastnumWhile += NUM / b % 10;
		b *= 10;
	}
		// Через DO WHILE
	int sumfirstnumDoWhile = 0;
	int sumlastnumDoWhile = 0;
	
	int a1 = 1000;
	int b1 = 1;
	
	do {
		sumfirstnumDoWhile += NUM / a1 % 10;
		a1 *= 10;
	} while ((NUM / a1) > 0);
	do { 
		sumlastnumDoWhile += NUM / b1 % 10;
		b1 *= 10;
	} while ((firsthalf / b1) > 0);
	
		// Проверяем везучий/нет
	int resultFor = 0;
	int resultWhile = 0;
	int resultDoWhile = 0;
		// Проверяем везучий/нет через FOR
	if (sumfirstnum == sumlastnum) {
		resultFor = 1;
	}
		// Проверяем везучий/нет через While
	if (sumfirstnumWhile == sumlastnumWhile) {
		resultWhile = 1;
	}
		// Проверяем везучий/нет через Do While
	if (sumfirstnumDoWhile == sumlastnumDoWhile) {
		resultDoWhile = 1;
	}
		
	return 0;
}

