#include <stdlib.h>
#include <time.h>

int countSym(char strIn[]); // Преждевременное объявление функции
void fillerWord(char strIn[], char filler, int lenIn, int len); // Преждевременное объявление функции которая ничего не возвращает

int main()
{
	srand(time(0));
	int len = rand() % 30 + 15; // Кол-во символов в диапазоне от 15 до 30 символов
	
	char filler = '_'; // Указываем заполнитель
	char strIn[] = "Ivanov"; // Вводим необходимый текст
	
	int lenIn = countSym(strIn); // Кол-во элементов исходного массива

	fillerWord(strIn, filler, lenIn, len);

return 0;
}

int countSym(char strIn[]) {
	int lenIn = 0;
	for (int i = 0; ; i++) { // Высчитываем кол-во заполнителей
		if (strIn[i] == '\0') { // Если элемент массива == '\o' - прекращается действие
			break;
		} else if (strIn[i] != 0) {
			lenIn++;
		}
	}
	return lenIn;
}

void fillerWord(char strIn[], char filler, int lenIn, int len) {
	char strResult[len];
	int lenFiller = len - lenIn; // Высчитываем сколько будет символов заполнителя
	int halfLenFiller = lenFiller / 2; // Кол-во символов заполнителя перед текстом

	for (int i = 0; i <= len; i++) { // Заполняем весь массив заполнителем
		strResult[i] = filler;
	}
	
	for (int i = halfLenFiller; i < (halfLenFiller + lenIn); ) { // Записываем текст в центр
		for (int j = 0; j < lenIn; j++) {
			strResult[i] = strIn[j];
			i++;
		}
	}	
}
