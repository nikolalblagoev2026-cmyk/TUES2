#include <stdio.h>

int main() {
    int n = -1;
    while (n <= 0) {
        scanf("%d", &n);
    }
    int digit, copyN = n, m = 0;
    while (copyN > 0) {
        digit = copyN % 10;
        m = m * 10 + digit;
        copyN = copyN / 10;
    }
    printf("%d ", m);
return 0;
}
