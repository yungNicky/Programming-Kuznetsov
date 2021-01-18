/**
 * @mainpage
 * # Загальне завдання
 * 1. На оцінку **"Задовільно"**, необхідно виконати завдання стосовно варіанту, обчислений за раніше-визначеною формулою.
 *
 * # Індивідуальне завдання
 * 6. Текст - це програма на мові С. Визначити, чи є у наведеному тексту ві пари дужок: (), {}, []. При реалізації цього завдання необхідно створити генералізовану функцію для обробки.
 *
 * @author Kuznetsov M.
 * @date 18-jan-2020
 * @version 1.0
 */

#include "lib.h"

 /**
  * Функция {@link main}
  *
  * Последовательность действий:
  * - Ввод нужного текста
  * - Подсчет размера строки
  * - @brief Вызов функции, которая определяет все ли пары есть круглых скобок 
  * {@link counterOfRoundBrackets}
  * - @brief Вызов функции, которая определяет все ли пары есть квадратных скобок 
  * {@link counterOfSquareBrackets}
  * - @brief Вызов функции, которая определяет все ли пары есть фигурных скобок 
  * {@link counterOfBracesBrackets}
  * 
  * @param text[] - Заданный текст
  * @param textSize - Размер строки
  *
  * @return Успешное завершение программы (0)
  */

int main()
{
	char text[] = "int main() { return 0;}";
	char* p_text = text;
	int textSize = strlen(text);

	int resultRoundBrackets = counterOfRoundBrackets(p_text, textSize); // 0 - все пары 
	int resultSquareBrackets = counterOfSquareBrackets(p_text, textSize); // 0 - все пары
	int resultBracesBrackets = counterOfBracesBrackets(p_text, textSize); // 0 - все пары


	return 0;
}
