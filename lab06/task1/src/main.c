#define LEN 15 // Указываем кол-во символов
int main()
{
	char filler = ('_'); // Указываем заполнитель
	char strIn[] = "Ivanov"; // Вводим необходимый текст
	char strResult[LEN];
	int lenIn = 0; // Кол-во элементов исходного массива

	for (int i = 0; ; i++) { // Высчитываем кол-во символов
		if (strIn[i] == '\0') { // Если элемент массива == '\o' - прекращается действие
			break;
		}
		else if (strIn[i] != 0) {
			lenIn++;
		}
	}

	int lenFiller = LEN - lenIn; // Высчитываем сколько будет символов заполнителя
	int halfLenFiller = lenFiller / 2; // Кол-во символов заполнителя перед текстом

	for (int i = 0; i <= LEN; i++) { // Заполняем весь массив заполнителем
		strResult[i] = filler;
	}
	
	for (int i = halfLenFiller; i < (halfLenFiller + lenIn); ) { // Записываем текст в центр
		for (int j = 0; j < lenIn; j++) {
			strResult[i] = strIn[j];
			i++;
		}
	}

	return 0;
}
