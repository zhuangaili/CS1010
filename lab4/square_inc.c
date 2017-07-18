/**
 * CS1010 AY2016/7 Semester 1 Lab4 Ex1
 * square.c
 * Given the size of a square and the values in
 * in the square, this program determines whether 
 * the given square is a semi-magic square.
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>
#include <math.h>
#define MAXSIZE 9

int scanSquare(int square[][MAXSIZE]); // Incomplete

void printSquare(int square[][MAXSIZE],int size);
int isSemiMagic(int square[][MAXSIZE], int size);

int main(void) { 	// Incomplete
	// Use the following printf statements 
	// for printing the output.
	int size,magicSquare;
	size=0;
	int square[MAXSIZE][MAXSIZE]={0};
	size=scanSquare(square);
	printSquare(square,size);
	magicSquare = isSemiMagic(square, size);
	if(magicSquare==1){
		printf("It is a semi-magic square.\n");
	}
	else if(magicSquare==-1){  
		printf("It is not a semi-magic square.\n");
	}
	return 0;
}

int scanSquare(int square[][MAXSIZE]) { // Incomplete
	// Use the following printf statements 
	// for printing the prompt messages.
	int size,row,column;	
	size=0;
	printf("Enter size of square: ");
	scanf("%d",&size);
	printf("Enter values in the square: \n");
	for(row=0;row<size;row++){
		for(column=0;column<size;column++){
			scanf("%d",&(square[row][column]));
		}
	}
	return size;
	
}

//Checks if square is a magic square
int isSemiMagic(int square[][MAXSIZE], int size){
	int row,col,column,colSum,rowSum,sum=0,i;
	for(i=0;i < size; i++){
		sum += square [0][i];
	}

	//Check for rows and their sums 
	for(row=1;row<size;row++){
		rowSum=0;
		for(column=0;column<size;column++){
			rowSum+=square[row][column];
		}
		if(rowSum!=sum){
			return -1;
		}
	}

	//Check for columns and their sums
	for(column=0;column<size;column++){
		colSum=0;
		for(row=0;row<size;row++){
			colSum+=square[row][column];
		}
		if(colSum!=rowSum){
			return -1;
		}

	}
	int nsquare[100]={0};
	//Check for all 1 to n^2 numbers being in the square
	for(row=0;row<size;row++){
		for(col=0;col<size;col++){
			if(square[row][col] > size*size || nsquare[square[row][col]] == 1){
				return -1;
				break;
			}
			nsquare[square[row][col]] = 1;
		}
	}
	return 1;
}





void printSquare(int square[][MAXSIZE],int size){
	int row,column;
	for(row=0;row<size;row++){
		for(column=0;column<size;column++){
			printf("%d ",square[row][column]);
		}
		printf ("\n");
	}
}	



//Check Row
//Check Column

//Check Numbers
