/**
 * @file lib.c
 * @brief Файл с реализацией всех функций
 * 
 * @author Kuznetsov M.
 * @date 18-jan-2020
 * @version 1.0
 */

#include "lib.h"

int counterOfRoundBrackets(char* p_text, int size) {
	int countRoundBracketsS = 0;
	int countRoundBracketsF = 0;
	int flagRoundBrackets = 0;

	for (int i = 0; i < size; i++) {
		if (p_text[i] == '(') {
			countRoundBracketsS += 1;
		}
	}

	for (int i = 0; i < size; i++) {
		if (p_text[i] == ')') {
			countRoundBracketsF += 1;
		}
	}

	if (countRoundBracketsS == countRoundBracketsF) {
		flagRoundBrackets = 0; // 0 - все пары скобок
	}
	else {
		flagRoundBrackets = 1; // 1 - не все пары
	}
	return flagRoundBrackets;
}

int counterOfSquareBrackets(char* p_text, int size) {
	int countSquareBracketsS = 0;
	int countSquareBracketsF = 0;
	int flagSquareBrackets = 0;

	for (int i = 0; i < size; i++) {
		if (p_text[i] == '[') {
			countSquareBracketsS += 1;
		}
	}

	for (int i = 0; i < size; i++) {
		if (p_text[i] == ']') {
			countSquareBracketsF += 1;
		}
	}

	if (countSquareBracketsS == countSquareBracketsF) {
		flagSquareBrackets = 0; // 0 - все пары скобок
	}
	else {
		flagSquareBrackets = 1; // 1 - не все пары
	}
	return flagSquareBrackets;
}

int counterOfBracesBrackets(char* p_text, int size) {
	int countBracesBracketsS = 0;
	int countBracesBracketsF = 0;
	int flagBracesBrackets = 0;

	for (int i = 0; i < size; i++) {
		if (p_text[i] == '{') {
			countBracesBracketsS += 1;
		}
	}

	for (int i = 0; i < size; i++) {
		if (p_text[i] == '}') {
			countBracesBracketsF += 1;
		}
	}

	if (countBracesBracketsS == countBracesBracketsF) {
		flagBracesBrackets = 0; // 0 - все пары скобок
	}
	else {
		flagBracesBrackets = 1; // 1 - не все пары
	}
	return flagBracesBrackets;

}
