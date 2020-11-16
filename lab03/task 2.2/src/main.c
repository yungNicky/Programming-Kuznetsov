#define NUM 2456
int main() {
    int firstn = NUM / 1000;
    int secondn = NUM / 100 % 10;
    int thirdn = NUM % 100 / 10;
    int fourthn = NUM % 10;
    int sum = firstn + secondn + thirdn + fourthn;
    return 0;
}
