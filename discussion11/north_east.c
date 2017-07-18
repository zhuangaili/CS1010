#include <stdio.h>

int north_east(int , int );

int main(void){
	int rows=0,columns=0;

	printf("Enter rows and columns apart");
	scanf("%d %d",&rows,&columns);
	printf("Enter number of NE paths");
	printf("%d",north_east(rows,columns));
}


int north_east(int rows, int columns){
	if(rows==0||columns==0){
		return 1;
	}
	else{
		return north_east(rows-1,columns)+north_east(columns-1,rows);
	}
}