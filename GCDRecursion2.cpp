#include<stdio.h>

int GCD(int, int);
int main() {
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    printf("GCD: %d\n", GCD(num1, num2));
    return 0;
}

int GCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;  // Base case: when num2 becomes 0, num1 is the GCD
    } else {
        return GCD(num2, num1 % num2);  // Recursive call with updated values
    }
}

