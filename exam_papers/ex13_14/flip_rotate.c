#include <stdio.h>
#define MAX_SIZE 5

void flip(int img[][MAX_SIZE], int size);
void rotate(int img[][MAX_SIZE], int size);
void printArray(int img[][MAX_SIZE],int size);
int main(void){
	int arr[][MAX_SIZE]={{0,0,0,0,0},{0,1,1,1,0},{0,0,1,0,0},{0,0,1,0,0},{0,0,0,0,0}};
	//flip(arr,MAX_SIZE);
	rotate(arr,MAX_SIZE);

	printArray(arr,MAX_SIZE);


}


void flip(int img[][MAX_SIZE], int size){
	int row,col,temp=0;
	int arr[][MAX_SIZE]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
	for(row=0;row<MAX_SIZE;row++){
		for(col=0;col<MAX_SIZE;col++){
			
		}
	}
	}



void rotate(int img[][MAX_SIZE], int size){
	int row,col,temp;
	for(row=0;row<MAX_SIZE/2;row++){
		for(col=0;col<MAX_SIZE;col++){
			temp=img[row][col];
			img[row][col]=img[MAX_SIZE-row-1][col];
			img[MAX_SIZE-row-1][col]=temp;
		}
	}

}

void printArray(int img[][MAX_SIZE], int size){
	int row,col;
	for(row=0;row<size;row++){
		for(col=0;col<size;col++){
			printf("%d ",img[row][col]);
			if(col==4){
				printf("\n");
			}
		}
	}
}