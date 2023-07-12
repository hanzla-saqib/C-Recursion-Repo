#include<stdio.h>

int prime(int num1, int i) {
    static int count = 0;

    if (i > num1 / 2) {
        return count;
    }

    if (num1 % i == 0) {
        printf("%d\n", i);
        count++;
    }

    return prime(num1, i + 1);
}

int main() {
    int num, i = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    int count = prime(num, i);

    if (count == 0)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);

    return 0;
}

