#include <stdio.h>

int fib(int a);

int main() {
    int x;
    if ((scanf("%d", &x) == 1) && (getchar() == '\n'))
        printf("%d\n", fib(x));
    else
        printf("n/a\n");
    return 0;
}

int fib(int a) {
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return fib(a - 1) + fib(a - 2);
}