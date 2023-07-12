#include<stdio.h>
int sum = 1;
int NumPow(int num1,int pow2) {
	
	static int pow = pow2;
	
	if(pow == 0) {
		
		return sum = 1;
	}
	if( pow > 1 ){
	
	
	NumPow( num1 , --pow ) ;
}
	
	 return sum *= num1;
}
int main() {
	
	int num,pow,pow2;
	
	printf("Enter a number and it\'s power\n");
	scanf("%d%d",&num,&pow);
	
	if(pow >= 0) {
	pow2 = NumPow(num,pow);
	printf("%d",pow2);
                  
				  }
	else
	printf("Plz enter positive power \n");
	
	
}

