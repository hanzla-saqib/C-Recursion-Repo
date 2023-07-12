#include<stdio.h>
int RevNum(int num1,int rev); 
int main() {
	
	int num,rev = 0;
	
		printf("Enter a number \n");
	scanf("%d",&num);//123
	
	printf("%d",RevNum(num,rev)) ;
	}
	
	int RevNum(int num1, int rev) {//123,0
		if(num1 == 0)
		return rev;
		
		rev = rev * 10 + num1 % 10;
		
		
			RevNum(num1 / 10,rev);
		
	}
