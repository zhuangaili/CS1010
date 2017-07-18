#include <stdio.h>
void flipLeftRight(int square[][4], int size);
int main(void){
	int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	flipLeftRight(mat,4);
}

void flipLeftRight(int square[][4], int size){
	int row,col,temp;
	for(row=0;row<size/2;row++){
		for(col=row;col<size-row-1;col++){
			temp=square[row][col];
			square[row][col]=square[size-col-1][row];
			square[size-col-1][row]=square[size-row-1][size-col-1];
			square[size-row-1][size-col-1]=square[col][size-row-1];
			square[col][size-row-1]=temp;
			
		}
	}
}