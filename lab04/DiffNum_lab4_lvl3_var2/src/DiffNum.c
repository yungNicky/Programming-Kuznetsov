int main()
{
	float num = 123.656; // Заданное число
	int num1 = num; // Целая часть числа
	int num2 = ((num - num1) * 1000); // Дробная часть
	int check = 0; 
	if (num1 == 0) {
		check = 1; // 1 - Есть 0
	} 
	
	float diff = (float)num2 / (float)num1; // Разница дробной части и целой
	float round_diff = ((float)(((int)(diff * 100)) / 100.0)); // Округление до 2 знака после запятой
	return 0;
}

