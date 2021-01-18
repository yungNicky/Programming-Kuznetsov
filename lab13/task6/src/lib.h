#pragma once

/**
 * @file lib.h
 * @brief Файл с прототипами всех функций
 *
 * @author Kuznetsov M.
 * @date 18-jan-2020
 * @version 1.0
 */

#include <string.h>

int counterOfRoundBrackets(char* p_text, int size);

/**
  * Функция {@link counterOfRoundBrackets}
  * - Проверка на парность круглых скобок
  * @param p_text - Заданный текст
  * @param Size - Размер строки
  *
  * @return 0/1 ( 0 - все пары есть)
  */

int counterOfSquareBrackets(char* p_text, int size);

/**
  * Функция {@link counterOfSquareBrackets}
  * - Проверка на парность квадратных скобок
  * @param p_text - Заданный текст
  * @param Size - Размер строки
  *
  * @return 0/1 ( 0 - все пары есть)
  */

int counterOfBracesBrackets(char* p_text, int size);

/**
  * Функция {@link counterOfBracesBrackets}
  * - Проверка на парность фигурных скобок
  * @param p_text - Заданный текст
  * @param Size - Размер строки
  *
  * @return 0/1 ( 0 - все пары есть)
  */
