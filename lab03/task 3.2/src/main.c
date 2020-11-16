#define NUM 123
int main()
{
    int num1 = NUM / 100;       // Находим 1 число
    int num2 = NUM / 10 % 10;   // Находим 2 число
    int num3 = NUM % 10;        // Находим 3 число
    int ReversedNum = num3 * 100 + num2 * 10 + num1;
    return 0;
}
