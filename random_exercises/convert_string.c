#include <stdio.h>
#include <string.h>

int main(){
	int size=80;
	char string_to_convert[60]="The quick brown";
	void convert_string(char 	string_to_convert[60], int size);
	convert_string(string_to_convert, size);
	printf("%s\n",string_to_convert );
}





void convert_string(char arr[60], int size){
	int counter_two,counter;
	counter_two=0;
	char new_array[60];
	/*
	for(counter=0;counter<size;counter++){
		if(arr[counter]==' '){
			arr[counter]='*';
		}
	}
	printf("%s",arr);
	*/
	

	while (arr[counter] !='\0'){	
    	if (arr[counter] != ' '){
        	new_array[counter_two++] = arr[counter];
        	new_array[counter_two++] ='*';
        }
        counter++;		
	}
	new_array[counter_two]='\0';
	
	
	printf("The second new sentence is %s",new_array);

		


}