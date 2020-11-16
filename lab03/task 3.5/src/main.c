#include <math.h>
#define NUM 123 // Заданное число
int main()
{
 float firstn = NUM / 100; // Нахождение 1 числа
 float thirdn = NUM % 10; // Нахождение 3 числа
 float diff = firstn / thirdn; // Разница 
 float RoundingDiff = ((float)(((int)(diff * 100)) / 100.0)); // Округление
 return 0;
}
