#include <math.h>
#include <stdio.h>

int div(int a, int b);
int simple(int a);
int max_simple_divisor(int a);
int module(int a);

int main() {
    int x;
    if ((scanf("%d", &x) == 1) && getchar() == '\n')
        printf("%d\n", max_simple_divisor(module(x)));
    else
        printf("n/a\n");
    return 0;
}

int div(int a, int b) {
    int count = 0;
    while (a >= b) {
        a -= b;
        count += 1;
    }
    if (a != 0) return 0;
    return count;
}

int simple(int a) {
    for (int i = 2; i < a; i++) {
        if (div(a, i) != 0) return 0;
    }
    return 1;
}

int max_simple_divisor(int a) {
    for (int i = a; i > 0; i--) {
        if ((div(a, i) != 0) && (simple(i) == 1)) return i;
    }
    return 0;
}

int module(int a) {
    if (a < 0) return -a;
    return a;
}