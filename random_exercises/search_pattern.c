	#include <stdio.h>
int main(){
	char maze[][8]={{'A'}};
	char search[][3]={{'A'}};


}




/* Task is to look for 2 x 3 pattern in 8 x 8 array.

*/


/** Take search string input from the user **/

char enter_search_string(char search[][3]){
	int counter,inner_loop;
	for(counter=0;counter<2;counter++){
		for(inner_loop=0;inner_loop<3;inner_loop++){
			printf("Enter the character of the array");
			scanf("%c",search[counter][inner_loop]);
		}
	}


}


/** search through the maze and see if the character is present. Return number of times search string is found -1 if non-existent **/
int linear_search(char maze[][8],char search[][3]){
	int column_addition,row_addition,inner_loop,counter,search_counter,pattern;
	counter=0;
	inner_loop=0;
	search_counter=0;
	pattern=0;
	for(column_addition=0;column_addition+counter<8;column_addition++){
		for(row_addition=0;inner_loop+row_addition<8;row_addition++){
			for(counter=0;counter<2;counter++){
				for(inner_loop=0;inner_loop<3;inner_loop++){
					if(maze[counter+column_addition][inner_loop+row_addition]==search[counter][inner_loop]){
						search_counter+=1;
					}
					else{
						search_counter=0;
					}
				}
			}
			if(search_counter==6){
				pattern+=1;
			}
		}
	}
	return pattern;
}



char print_search_string(char search[][3]){
	int counter,inner_loop;
	for(counter=0;counter<2;counter++){
		for(inner_loop=0;inner_loop<3;inner_loop++){
			printf("%c ", search[counter][inner_loop]);
			
		}
	}


}