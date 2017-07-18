	#include <stdio.h>
	int check_square(int, int);
	int main(void){
		int number;
		number=0;
		printf("Enter an integer");
		scanf("%d",&number);
		printf("%d",check_square(number,0));
	}


	int check_square(int n, int david){
		if(david*david<n){
			return 1;
		}
		else{
			check_square(n,david+1);
		}
		

	}