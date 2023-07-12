#include<stdio.h>
int ConBinary(int num1); 

int main() {
	
	int num;
	
	printf("Enter a number to conert it into binary\n");
	scanf("%d",&num);
	if(num > 0) {
	printf("%d",ConBinary(num));
                                 }
    else {
    	
    	printf("You entered an invalid number\n");
	}
            
}

int ConBinary(int num1) {
	
	static int binary = 0 ;
	if(num1 !=01 ) 
	            ConBinary(num1 / 2) ;
	            
	     
        return binary = binary * 10 + num1 % 2;	            
}
