#include <stdio.h>
#include <string.h>
int period(char str[]);
int main(void){
	char input_string[100]="abcabcabcabc";
  printf("%d",period(input_string));


}

/**
iterate over each length of string
for each substring
	if substring*len(string)/len(substring) ==string
		return length of substring 
	else
		length of substring+1


*/
int period(char str[]){
	int counter,length,sub_counter;
	char temp[100]="";
	char substring[100]="";

	length=strlen(str);

	for(counter=1;counter<=length;counter++){
		strncpy(substring,str,counter);
		for(sub_counter=0;sub_counter<(strlen(str)/strlen(substring));sub_counter++){
			strcat(temp,substring);		
		}
		if(strcmp(temp,str)==0){
			return counter;
		}
    temp[0] = '\0';




	}
	return -1;
}