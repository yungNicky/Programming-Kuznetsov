
int main()
{
	char text[] = "First second third"; // Введенный текст
	int space = 0; // Количество пробелов в тексте
	
	int size = sizeof(text) / sizeof(text[0]); // Количество символов в массиве
	
	for (int i = 0; i <= size; i++) { // Считаем общее количество пробелов
		if (text[i] == ' ' || text[i] == '\0') {
			space += 1;
		}
	}
	
	int dblspace = 0; // Количество двойных пробелов в массиве
	
	for (int i = 0; i <= size; i++) { // Считаем общее количество двойных пробелов в массиве
		if ((text[i] == ' ' && text[i+1] == ' ') || (text[i] == ' ' && text[i+1] == '\0')) {
			dblspace += 1;
		}
	} 
	
	int amountOfWords = 0; // Счетчик слов в массиве
	
	if (dblspace > 2) {
		amountOfWords = (space - dblspace) - 1;
	} else {
		amountOfWords = space - dblspace;
	}
	
	return 0;
}

