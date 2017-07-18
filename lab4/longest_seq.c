/**
 * CS1010 AY2016/7 Semester 1 Lab4 Ex2
 * Given a 12x12 integer array, fill it with integers, and
 * find the longest sequence of a digit that appears in 
 * the array horizontally, vertically or diagonally.
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 12

// Fill in the function prototypes below
int scanBoard(int arr[][DIM]);
int search(int arr[][DIM], int search_digit);
int main(void) {
	int board[DIM][DIM] = { {0} };
	int search_digit;     
	int length;           // length of the longest sequence of search digit
	int bestRow, bestCol; // where the longest sequence of search digit starts in the board
	search_digit=scanBoard(board); 
	printf("Search digit is %d\n",search_digit);	
	length=search(board,search_digit);
	// call search()


	if (length > 0) {
		printf("Length of longest sequence = %d\n", length); 
		printf("Start at (%d,%d)\n", bestRow, bestCol);      
	}
	else
		printf("No such sequence.\n");

	return 0;
}

// Fill in the description of the function.
int scanBoard(int arr[][DIM]) {
	int row,col,search_digit;
	search_digit=0;
	srand(time(NULL));
	for(row=0;row<DIM;row++){
		for(col=0;col<DIM;col++){
			arr[row][col]=rand()%9+1;
			printf("%d ",arr[row][col]);
			if(col==11){
				printf("\n");
			}
		}
	}
	search_digit=rand()%9+1;
	return search_digit;

}


// Fill in the description of the function.
//arr[0]=bestCol
//arr[1]=bestRow
//arr[2]=length
int search(int arr[][DIM], int search_digit) {
	int counter,row,col,bestCol,bestRow,length;
	length=0;
	counter=0;
	bestCol=0;
	bestRow=0;	
	for(row=0;row<DIM;row++){
		for(col=0;col<DIM;col++){
			if(arr[row-1][col]== search_digit && arr[row][col]==search_digit){
				counter++;
				bestCol=col;
				bestRow=row;
			}
			if(arr[row][col-1]==search_digit && arr[row][col]==search_digit){
				counter++;
				bestCol=col;
				bestRow=row;
			}
			if(arr[row-1][col-1]==search_digit && arr[row][col]==search_digit){
				counter++;
				bestCol=col;
				bestRow=row;
			}
			
			}
		}

	printf("%d %d %d",bestRow,bestCol,length);

	return length;
}

