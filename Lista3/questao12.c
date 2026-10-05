#include <stdio.h>

int main() {
    int c;
    double f, k;

    printf("%8s %10s %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32;
        k = c + 273.15;
        printf("%8.2f %10.2f %10.2f\n", (double)c, f, k);
    }
    return 0;
}