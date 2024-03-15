#include <stdio.h>
#include <stdlib.h>

void radix(int a, int b) {
    int jessica;
    int result = 0;
    int multiplier = 1;
    while (a != 0) {
        jessica = a % b;
        result += jessica * multiplier;
        a /= b;
        multiplier *= 10;
    }
    printf("%d\n", result);
}

int main() {
    int input, num;
    printf("정수, 진법 입력 : ");
    scanf_s("%d %d", &input, &num);
    radix(input, num);
}