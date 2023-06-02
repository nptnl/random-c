#include <stdio.h>
#include <math.h>

struct comp {
    double r;
    double i;
};

double mag(struct comp v);

int main() {
    struct comp the;
    the.r = 3.0;
    the.i = 4.0;
    printf("%f", mag(the));
    return 0;
}
double mag(struct comp v) {
    return sqrt(v.r * v.r + v.i * v.i);
}