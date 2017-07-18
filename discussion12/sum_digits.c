#include <stdio.h>

/*
Sum digits in non negative integer n
*/
int sum_digits(int n);

int main(void){
	int number;
	printf("Enter a number");
	scanf("%d",&number);
	printf("%d",sum_digits(number));

}


int sum_digits(int n){
// Takes a number and recursively returns the sum of it's digits
	if(n>10){
		return n%10+ sum_digits(n/10);
	}
	else{
		return n;
	}	

}