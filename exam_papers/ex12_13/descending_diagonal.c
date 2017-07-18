#include <stdio.h>
#define MAX_SIZE 5
int isDescDiagonal(int matrix[][MAX_SIZE],int size);
int main(void){
	int matrix[][MAX_SIZE]={{5,0,0,0,0},{0,7,0,0,0},{0,0,3,0,0},{0,0,0,2,0},{0,0,0,0,1}};
	printf("%d",isDescDiagonal(matrix,5));

}



int isDescDiagonal(int matrix[][MAX_SIZE], int size){
	int row,col,position;
	for(row=0;row<MAX_SIZE;row++){
		for(col=0;col<MAX_SIZE;col++){
			if(matrix[row][col]!=0&&row!=col){
				return -1;
			}
		}
		if(matrix[row][row]!=matrix[0][0]-row){
			return -1;
		}
	}
	return 0;
}



/*
#include <stdio.h>
#define MAX_SIZE 2
int isDescDiagonal(int matrix[][MAX_SIZE],int size);
int main(void){
	int matrix[][MAX_SIZE]={{10,0},{0,9}};
	printf("%d",isDescDiagonal(matrix,2));

}



int isDescDiagonal(int matrix[][MAX_SIZE], int size){
	int row,col,position,temp;
	temp=matrix[0][0];
	for(row=0;row<MAX_SIZE;row++){
	  
		for(col=0;col<MAX_SIZE;col++){
			if(matrix[row][col]!=0 && row!=col){
				return -1;
			}
		}
		 if(matrix[row][row]!=temp--){
			  return -1;
		  }
		
	}
	return 0;
}
*/