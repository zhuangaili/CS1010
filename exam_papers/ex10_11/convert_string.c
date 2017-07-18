#include <stdio.h>


void convert_string(char *string, char *dest);


int main(void){
	char string_to_convert[60]="The quick brown";
	char dest[70]="";
	convert_string(string_to_convert,dest);
}

void convert_string(char *string, char *dest){
	while(*string!='\0'){
		if(*string!=' '){
			*dest++= *string;
			*dest++='*';	
		}
		*string++;
	}
		*dest='\0';

}