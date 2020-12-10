
#define LEN 15 // Указываем кол-во символов
int main()
{
	char filler = "_"; // Указываем заполнитель
	char strIn[] = "Ivanov"; // Вводим необходимый текст
	char strResult[LEN];
	int lenIn = 0; // Кол-во элементов исходного массива

	for (int i = 0; ; i++) { // Высчитываем кол-во заполнителей
		if (strIn[i] == '\0') { // Если элемент массива == '\o' - прекращается действие
			break;
		} else if (strIn[i] != 0) {
			lenIn++;
		}
	}
	
	int lenFiller = LEN - lenIn - 1; // Высчитываем сколько будет символов заполнителя
	int halfLenFiller = lenFiller / 2; // Кол-во символов заполнителя перед и после текста

	for (int i = 0; i < halfLenFiller; i++) {
		strResult[i] = filler;
	}
	
	
	for (int i = halfLenFiller; i < (halfLenFiller = lenIn); ) {
		for (int j = 0; j < lenIn; j++) {
			strResult[i] = strIn[j];
			i++;
		}
	}

return 0;
}
