#include <stdio.h>


int largest_digit_pair(int n);

int main(void){
	int number;
	number=0;
	printf("Please enter the number");
	scanf("%d",&number);
	printf("The largest number within your number is %d",largest_digit_pair(number));
}


int largest_digit_pair(int n){
	int mypair,largest_pair;
  if(n==0){
    return mypair;
  }
  mypair=n%100;
  largest_pair=largest_digit_pair(n/100);
  if(mypair>largest_pair){
    return mypair;
  }
  else{
    return largest_pair;
  }

}