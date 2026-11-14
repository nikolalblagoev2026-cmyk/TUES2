#include <stdio.h>
int main() {
    int n = -1;
    while (n <= 0) {
        scanf("%d", &n);
    }
    int digit = 0, weight = 1, copyN = n, m = 0;
    while (copyN > 0) {
        digit = copyN % 10;
        copyN = copyN / 10;
        if (digit % 2 == 0) {
            m = m + digit * weight;
            weight = weight * 10;
        }
    }
    printf("%d", m);
return 0;
}
