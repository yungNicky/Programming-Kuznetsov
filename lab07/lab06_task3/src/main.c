#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

int compareNum(int count, ...); // Преждевременное объявление функции

int copyOne(char numResult[], int iStart, char numStr[], int size) {
	for (int t = 0; t < size; t++) {
		numResult[iStart] = numStr[t];
		iStart++;
	}
	return iStart;
}

int copyNum(int num, char numResult[], int iStart) {
	char zero[4] = {'z','e','r','o'};
	char one[3] = {'o','n','e'};
	char two[3] = {'t','w','o'};
	char three[5] = {'t','h','r','e','e'};
	char four[4] = {'f','o','u','r'};
	char five[4] = {'f','i','v','e'};
	char six[3] = {'s','i','x'};
	char seven[5] = {'s','e','v','e','n'};
	char eight[5] = {'e','i','g','h','t'};
	char nine[4] = {'n','i','n','e'};	
	
	switch(num) {
		case 0: 
			iStart = copyOne(numResult, iStart, zero, 4);
			break;
		case 1:
			iStart = copyOne(numResult, iStart, one, 3);
			break;
		case 2:
			iStart = copyOne(numResult, iStart, two, 3);
			break;
		case 3:
			iStart = copyOne(numResult, iStart, three, 5);
			break;
		case 4:
			iStart = copyOne(numResult, iStart, four, 4);
			break;
		case 5:
			iStart = copyOne(numResult, iStart, five, 4);
			break;
		case 6:
			iStart = copyOne(numResult, iStart, six, 3);
			break;
		case 7:
			iStart = copyOne(numResult, iStart, seven, 5);
			break;
		case 8:
			iStart = copyOne(numResult, iStart, eight, 5);
			break;
		case 9:
			iStart = copyOne(numResult, iStart, nine, 4);
			break;
	}
	return iStart;
}

void fillStr(char numResult[], int num) {
	short size = 0;
	int number = num;
	
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};	
	
	for (int i = 10000; i > 0; i /= 10) { // Узнаем количество символ в NUM и записываем кол-во в size
		if (number > 0) {
			if ((number % i) != number) {
				size++;
			}
			number %= i;
		}
	}
	number = num;
	int iStart = 0;
	
	if (size == 4) { // Если size == 4 , т.е. заданное число 4значное - записываем тысячи
		number = num / 1000;
		iStart = copyNum(number, numResult, iStart); // Числа
		iStart = copyOne(numResult, iStart, thousand, 10); // Разряды
		size--; // Отнимаем от сайза 1, т.е. переходим на сотни
		number = num % 1000;
	}
	
	if (size == 3) { // Если size == 3 - записываем сотни
		number = num / 100 % 10;
		iStart = copyNum(number, numResult, iStart); // Числа
		iStart = copyOne(numResult, iStart, hundred, 9); // Разряды
		size--; // Отнимаем от сайза 1, т.е. переходим на десятки
		number = num % 100;
	}
	
	if (size == 2) { // Если size == 2 - записываем десятки
		number = num / 10 % 10;
		iStart = copyNum(number, numResult, iStart); // Числа
		iStart = copyOne(numResult, iStart, decade, 8); // Разряды
		size--; // Отнимаем от сайза 1, т.е. переходим на единицы
		number = num % 10;
	}
	
	if (size == 1) {
		number = num % 10;
		iStart = copyNum(number, numResult, iStart); // Числа
		numResult[iStart] = '\0'; // конец массива
	}
	
	if (size == 0) { // Если size == 0 - записываем ноль
		number = num;
		iStart = copyNum(number, numResult, iStart); // Числа
	}
}

int main()
{
	srand(time(0));
	
	int num = rand() % 9999 + 0; // Генерация числа в диапазоне от 0 до 9999
	char numResult[47] = {0}; // Объявление массива в который будет записываться 
	
	fillStr(numResult, num);
	int count = 3;
	int compare = compareNum(count, 1, 3, 2);
	
	return 0;
}

int compareNum(int count, ...) {
	va_list ap;
	int k;
	int num = 0;
	int resultCompareNums = 0;
	va_start(ap, count);
	for (k = 0; k < count; k++) {
		if (num < va_arg(ap, int)) {
			resultCompareNums++;
		}
	}
	va_end(ap);

	return resultCompareNums;
	
}

