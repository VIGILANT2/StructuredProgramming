#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 2;
    float res1 = (a + b) * c - d / (float)e; // Standard precedence without changing order
    printf("%.2f\n", res1);  // Output: 5.00
    return 0;
}
