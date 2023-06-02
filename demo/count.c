#include <stdio.h>

int counting() {
    int x = 0;
    while (x < 50) {
        x += 1;
    }
    printf("%d", x);
    return 0;
}
int stupid() {
    int array[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384 };
    int indx;
    for (indx = 0; indx < 15; indx++) {
        printf("%d\n", array[indx]);
    }
    return 1;
}
int main() {
    stupid();
}