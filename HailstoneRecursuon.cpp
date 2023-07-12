#include<stdio.h>
int Hailstone(int num1); 
	
int main() {
	
	int num;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	Hailstone(num);
	
}

int Hailstone(int num1) {//
	
	if(num1 != 1) {

	if( num1 % 2 == 0 ) {
		
		 num1 = num1 / 2;
		 printf("%d ",num1);
	                      
						  }
          else {
          	
                  num1 = (num1 * 3) + 1;
				  printf("%d ",num1);	
		  }
         }
         
         if(num1 != 1) {
         	
         	Hailstone(num1);
		 }
		 
		 
}
