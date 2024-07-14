#include <stdio.h>
static inline int quad(int a) {
    return a * a;
}
int main() {
    int a;
    scanf("%d", &a);
    printf("Quadrat von %d ist %d.\n", a, quad(a));
    return 0;
}