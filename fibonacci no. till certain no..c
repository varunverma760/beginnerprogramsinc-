#include <stdio.h>
int main() {
    int a = 0, b = 1, c = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", a, b);

    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        c = a+b;
        a=b;
        b=c;
    }

    return 0;
}
