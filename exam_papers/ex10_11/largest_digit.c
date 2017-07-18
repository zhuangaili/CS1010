#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int largest_digit_pair(int);
int main (void){
	char a[10007];
	int n;
	printf("Enter digit pair");
	fgets(a,10,stdin);
	n=atoi(a);
	printf("%d",largest_digit_pair(n));

}


int largest_digit_pair(int n){
	int max_pair,current_pair;
	if(n==0){
		return max_pair;
	}
	max_pair=n%100;
	current_pair=largest_digit_pair(n/100);
	if(max_pair<current_pair){
		return current_pair;
	}
	else{
		return max_pair;
	}




}