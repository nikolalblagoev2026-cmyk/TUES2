#include <stdio.h>

int main() {
    int n = -1;
    while (n <= 0) {
        scanf("%d", &n);
    }
    int sum = 0, number;
    for (int i = 0;i < n; i++) {
        scanf("%d", &number);
        sum += number;
    }
    printf("%d", sum);
return 0;
}
