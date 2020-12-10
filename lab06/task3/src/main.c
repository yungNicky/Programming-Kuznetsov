
#define NUM 1234 // Заданное число

int main()
{
	char numResult[47] = {0}; // Объявление массива в который будет записываться 
	short size = 0;
	
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
	
	char decade[8] = {' ','d','e','c','a','d','e',' '};
	char hundred[9] = {' ','h','u','n','d','r','e','d',' '};
	char thousand[10] = {' ','t','h','o','u','s','a','n','d',' '};
	
	int num = NUM;
	int iStart = 0;
	
	for (int i = 10000; i > 0; i /= 10) { // Узнаем количество символ в NUM и записываем кол-во в size
		if (num > 0) {
			if ((num % i) != num) {
				size++;
			}
			num %= i;
		}
	}
	
	if (size == 4) { // Если size == 4 , т.е. заданное число 4значное - записываем тысячи
		num = NUM / 1000;
		switch (num) {
		case 1: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6: 
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8: 
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9: 
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;	
		}
		for (int th = 0; th < 10; th++, iStart++) { // Добавляем частицу THOUSAND
			numResult[iStart] = thousand[th];
		}
		size--; // Отнимаем от сайза 1, т.е. переходим на сотни
		num = NUM % 1000;
	}
	
	if (size == 3) {// Если size == 3 - записываем сотни
		num = num / 100;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int h = 0; h < 9; h++, iStart++) { // Добавляем частицу HUNDRED
			numResult[iStart] = hundred[h];
		}
		size--; // Отнимаем от сайза 1, т.е. переходим на десятки
		num = NUM % 100;
	}
	
	if (size == 2) { // Если size == 2 - записываем десятки
		num = num / 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		for (int d = 0; d < 8; d++, iStart++) { // Добавляем частицу DECADE
			numResult[iStart] = decade[d];
		}
		size--; // Отнимаем от сайза 1, т.е. переходим на единицы
	}
	
	if (size == 1) { // Если size == 1 - записываем единицы
		num = NUM % 10;
		switch (num) {
		case 0:
			break;
		case 1:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = one[t];
				iStart++;
			}
			break;
		case 2:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = two[t];
				iStart++;
			}
			break;
		case 3:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = three[t];
				iStart++;
			}
			break;
		case 4:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = four[t];
				iStart++;
			}
			break;
		case 5:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = five[t];
				iStart++;
			}
			break;
		case 6:
			for (int t = 0; t < 3; t++) {
				numResult[iStart] = six[t];
				iStart++;
			}
			break;
		case 7:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = seven[t];
				iStart++;
			}
			break;
		case 8:
			for (int t = 0; t < 5; t++) {
				numResult[iStart] = eight[t];
				iStart++;
			}
			break;
		case 9:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = nine[t];
				iStart++;
			}
			break;
		}
		numResult[iStart] = '\0'; // конец массива
	}
	
	if (size == 0) { // Если size == 0 - записываем ноль
		switch(num) {
		case 0:
			for (int t = 0; t < 4; t++) {
				numResult[iStart] = zero[t];
				iStart++;
			}
			break;
		}
	}
		
	return 0;
}

