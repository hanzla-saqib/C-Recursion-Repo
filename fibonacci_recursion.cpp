#include<stdio.h>

int Fibonacci(int num1); 

int main() {
	
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	Fibonacci(num);
}

int Fibonacci(int num1) {
	
	static int num2 = 1,num3 = 0;
	if(num1 != 0) {
	
		Fibonacci(num1 - 1);
}
	num2 += num3;
	printf("%d ",num2);
	num3 += num2;
	printf("%d ",num3);
}
