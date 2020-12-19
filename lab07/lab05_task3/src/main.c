#include <stdlib.h>
#include <time.h>

int luckyticket_for(int num); // Преждевременное объявление функции
int luckyticket_while(int num); // Преждевременное объявление функции
int luckyticket_dowhile(int num); // Преждевременное объявление функции

int main()
{
	srand(time(0));
	
	int num = rand() % 100000 + 100000; // Номер билета
	
	int luckyticketResult_for = luckyticket_for(num); // Если luckyticketResult_for = 1 - билет везучий 
	int luckyticketResult_While = luckyticket_while(num); // Если luckyticketResult_While = 1 - билет везучий 
	int luckyticketResult_DoWhile = luckyticket_dowhile(num); // Если luckyticketResult_DoWhile = 1 - билет везучий 
	
	return 0;
}

int luckyticket_for(int num) {
	int resultFor = 0;
	int sumfirstnum = 0;
	int sumlastnum = 0;
	int firsthalf = num / 1000;	
	
	for (int a = 1000; (num / a) > 0; a *= 10) {
		sumfirstnum += num / a % 10;
	}
	for (int b = 1; (firsthalf / b) > 0; b *= 10) {
		sumlastnum += num / b % 10;
	}
	
	if (sumfirstnum == sumlastnum) { // Проверяем везучий/нет через 
		resultFor = 1;
	}
	return resultFor;
}

int luckyticket_while(int num) {
	int resultWhile = 0;
	int sumfirstnumWhile = 0;
	int sumlastnumWhile = 0;	
	int firsthalf = num / 1000;
	
	int a = 1000;
	int b = 1; 
	
	while ((num / a) > 0) { 
		sumfirstnumWhile += num / a % 10;
		a *= 10;
	}
	while ((firsthalf / b) > 0) {
		sumlastnumWhile += num / b % 10;
		b *= 10;
	}
	
	if (sumfirstnumWhile == sumlastnumWhile) { // Проверяем везучий/нет через 
		resultWhile = 1;
	}
	return resultWhile;	
}

int luckyticket_dowhile(int num) {
	int resultDoWhile = 0;
	int sumfirstnumDoWhile = 0;
	int sumlastnumDoWhile = 0;
	int firsthalf = num / 1000;
	
	int a1 = 1000;
	int b1 = 1;
	
	do {
		sumfirstnumDoWhile += num / a1 % 10;
		a1 *= 10;
	} while ((num / a1) > 0);
	do { 
		sumlastnumDoWhile += num / b1 % 10;
		b1 *= 10;
	} while ((firsthalf / b1) > 0);
	
	if (sumfirstnumDoWhile == sumlastnumDoWhile) { // Проверяем везучий/нет через 
		resultDoWhile = 1;
	}
	return resultDoWhile;
}
