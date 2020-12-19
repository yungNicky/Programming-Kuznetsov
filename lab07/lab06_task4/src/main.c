#include <stdlib.h>
#include <time.h>

int spaceCounter(int size, char text[]); // Преждевременное объявление функции
int dblSpaceCounter(int size, char text[]); // Преждевременное объявление функции

int main()
{
	char text[] = "First           second              third"; // Введенный текст	
	int size = sizeof(text) / sizeof(text[0]); // Количество символов в массиве
	
	int space = spaceCounter(size, text);
	int dblSpace = dblSpaceCounter(size, text); 
	
	int amountOfWords = 0; // Счетчик слов в массиве
	amountOfWords = space - dblSpace;


	return 0;
}

int spaceCounter(int size, char text[]){
	int spaceResult;
	
	for (int i = 0; i < size; i++) { // Считаем общее количество пробелов
		if (text[i] == ' ' || text[i] == '\0') {
			spaceResult += 1;
		}
	}
	
	return spaceResult;
}

dblSpaceCounter(int size, char text[]){
	int dblspaceResult = 0;
	
	for (int i = 0; i <= size; i++) { // Считаем общее количество двойных пробелов в массиве
		if ((text[i] == ' ' && text[i+1] == ' ') || (text[i] == ' ' && text[i+1] == '\0')) {
			dblspaceResult += 1;
		}
	}
	 	
	return dblspaceResult;
}

