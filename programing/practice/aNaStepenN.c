#include <stdio.h>
int main() {

int a, n;
scanf("%d", &a);
while (a <= 0) {
    scanf("%d", &a);
}
scanf("%d", &n);
while (n <= 0) {
    scanf("%d", &n);
}

int starterA = a;

for (int i = 1;i < n; i++) {
    a = a * starterA;
}

printf("%d\n", a);
return 0;
}
