#include <stdio.h>

int main() {
    int n = -1;
    int f1 = 0, f2 = 1, fnext;
    while (n <= 0) {
            scanf("%d", &n);
    }
    printf("%d", f1);
    printf("%d", f2);
    for (int i = 2;i < n; i++) {
        fnext = f1 + f2;
        f1 = f2;
        f2 = fnext;
        printf("%d", fnext);
    }
return 0;
}
