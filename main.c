#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    printf("Enter two integers: \n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("The sum is: %d\n", sum);

    return 0;
}
