#include <stdio.h>
#define MAX_SIZE 3
int antiDiagonal(int matrix[][MAX_SIZE],int size);
int main(void){
	int matrix[][MAX_SIZE]={{0,0,3},{0,-1,0},{-2,0,0}};
	printf("%d",antiDiagonal(matrix,3));

}



int antiDiagonal(int matrix[][MAX_SIZE], int size){
	int row,col;
	for(row=0;row<MAX_SIZE;row++){
		if(matrix[row][MAX_SIZE-row-1]==0){
			return -1;
		}
	
		for(col=0;col<MAX_SIZE;col++){
			if(col!=MAX_SIZE-row-1 && matrix[row][col]!=0){
				return -1;
			}
		}
	}
	return 1;
}
