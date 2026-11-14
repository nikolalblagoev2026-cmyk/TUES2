#include <stdio.h>

int main() {
    int n = -1;
    while (n <= 0) {
        scanf("%d", &n);
    }
    int digitCount = 0, copyN = n;
    while (copyN > 0) {
        digitCount++;
        copyN = copyN / 10;
    }
    printf("%d ", digitCount);
return 0;
}
