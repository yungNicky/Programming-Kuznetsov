#pragma once

/**
 * @file lib.h
 * @brief Файл с прототипами всех функций
 *
 * @author Kuznetsov M.
 * @date 11-jan-2020
 * @version 1.0
 */

#include <stdlib.h>
#include <time.h>

#define N 15

int minElFounder(int* arr);
int maxElFounder(int* arr);
void sumOfElements (int* arrIn, int* arrOut, int newSize, int start, int end, int* sum);
