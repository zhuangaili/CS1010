#include <stdio.h>
#include <string.h>

int main(){
	char string_to_read[60]="George Bush";
	char second_string[60]="He Bugs Gore";

	//char another_string[60]={'b'};
	int size=10;
	void remove_spaces(char* source);
	void sort_string(char string_to_read[],int );
	//printf("Please enter a string");
	//scanf("%s",string_to_read);
	remove_spaces(string_to_read);
	sort_string(string_to_read,size);
	printf("The string is %s",string_to_read);
	//printf("Please enter a second string");
	//scanf("%s",second_string);
	remove_spaces(second_string);
	sort_string(second_string,size);
	printf("%d",strcmp(string_to_read,second_string));
	


	//strcmp(sorted_a,sorted_b);
}







//Returns sorted string of both arrays

void sort_string(char string_to_read[],int size){
	int counter,gatekeeper;
	char temp;
	do{
		gatekeeper=0;

		for(counter=0;counter<size-1;counter++){
			if(string_to_read[counter]>string_to_read[counter+1]){
				temp=string_to_read[counter];
				string_to_read[counter]=string_to_read[counter+1];
				string_to_read[counter+1]=temp;
				gatekeeper=1;

			}
		}

	}while(gatekeeper!=0);

}





void remove_spaces(char* source)
{
  char* i = source;
  char* j = source;
  while(*j != 0)
  {
    *i = *j++;
    if(*i != ' ')
      i++;
  }
  *i = 0;


}



