#include<stdio.h>

int GCD(int,int,int);
int main() {
	
	int num1,num2,min;
	
	
	printf("Enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	num1<num2?min = num1:min = num2;
	min /= 2;
	printf("%d",GCD(num1,num2,min));
}
int GCD(int num1,int num2,int min) {
	
	static int gcd;
	
	if(min > 1) 
	GCD(num1,num2,min - 1);
	
	if(num1 % min == 0 && num2 % min == 0) {
		
		return gcd = min;
	} else{
		gcd = 1;
	}
}
