#include<stdio.h>
int recurse_fact(int num1);
int main() {
	
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	printf("%d",recurse_fact(num));
}

int recurse_fact(int num1) {
	static int fac = 1;
	if(num1 == 0) {
		return 1;
	}
	if(num1 > 1) //5
	recurse_fact(num1 - 1);//4		
	return fac *= num1;
}
