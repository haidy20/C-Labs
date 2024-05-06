#include <stdio.h>

struct Pair {
    int num1;
    int num2;
    int sum;
    int sub;
    int multi;
};

struct Pair calc(int num1, int num2) {
    struct Pair result;

    result.num1 = num1;
    result.num2 = num2;
    result.sum = num1 + num2;
    result.sub = num1 - num2;
    result.multi = num1 * num2;

    return result;
}
struct Pair n1;
int main() {
    int a;
    int b;
    int sum;
    int sub;
    int multi;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    struct Pair n1 = calc(a, b);

    printf("Sum= %d\n",n1.sum);
    printf("sum= %d\n",n1.sub);
    printf("multiply= %d\n",n1.multi);

    return 0;
}
