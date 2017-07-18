#include <stdio.h>
#define SIZE 5
int fill_array(int arr[][5], int n);
void print_array(int arr[][5], int n);
int main(void){
	int arr[SIZE][SIZE]={0};
	fill_array(arr,3);
	print_array(arr,3);
}




int fill_array(int arr[][5], int n){
	int row,col;
	if(n==0){
	  return 0;
	}
	else{
		//row=n;
		for(col=n;col>0;col--){
			arr[n-1][col-1]=n;
			arr[col-1][n-1]=n;

		}
		fill_array(arr,n-1);
	}
}


void print_array(int arr[][5],int n){
	int row;
	int col;
	for(row=0;row<n;row++){
		for(col=0;col<n;col++){
			printf("%d ",arr[row][col]);
		}
		printf("\n");
	}
}