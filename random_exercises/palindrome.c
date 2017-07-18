#include <stdio.h>
#include <ctype.h>
#include <string.h>	

int main(){
	char str[] = "ABBA";
	int value=0;
	void	lower_case(char str[]);
	int is_palindrome(char str[],int);
	lower_case(str);
	value=is_palindrome(str,strlen(str));	
	printf("%d",value);	
}




void lower_case(char str[]){
	int i = 0;
	
  	while( str[i] ) 
   	{
		str[i]=	tolower(str[i])	;
		i++;	
    }
}


int is_palindrome(char str[],int 	size){
	int counter;
	for(counter=0;counter<size/2;counter++){
		if(str[counter]!=str[size-1-counter]){
			return 0;
		}

	}
	return 1;




}