#include<stdio.h>

int SumDig(int num1);

int main() {
	
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	printf("Sum of the digits of the number is = %d",SumDig(num));
	
}

int SumDig(int num1) {
	static int sum = 0;
	int dig;
	if(num1 != 0)
	SumDig(num1 / 10);
	
	dig = num1 % 10;
	return sum += dig;
}
