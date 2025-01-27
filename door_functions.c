#include <math.h>
#include <stdio.h>

#define PI 3.14159265358979323846

double verzier_of_agnese(double x);
double lemniscate_of_bernoulli(double x);
double quadratic_hyperbola(double x);

int main() {
    double x, step;

    step = (2 * PI) / (41);

    for (int i = 0; i < 42; i++) {
        x = -PI + i * step;

        double verzier = verzier_of_agnese(x);
        double lemniscate = lemniscate_of_bernoulli(x);
        double hyperbola = quadratic_hyperbola(x);

        printf("%.7f | ", x);
        if (verzier == 0) {
            printf("- | ");
        } else {
            printf("%.7f | ", verzier);
        }

        if (lemniscate == 0) {
            printf("- | ");
        } else {
            printf("%.7f | ", lemniscate);
        }

        if (hyperbola == 0) {
            printf("-\n");
        } else {
            printf("%.7f\n", hyperbola);
        }
    }

    return 0;
}

double verzier_of_agnese(double x) {
    double d = 1.0;
    return d * d * d / (x * x + d * d);
}

double lemniscate_of_bernoulli(double x) {
    double num = sqrt(1 + 4 * pow(x, 2)) - pow(x, 2) - 1;
    if (num >= 0) {
        return sqrt(num);
    } else {
        return 0;
    }
}

double quadratic_hyperbola(double x) {
    if (x == 0) {
        return 0;
    }
    return 1 / pow(x, 2);
}