#define MAX_SIZE 3
#include <stdio.h>
int iSolitude(int arr[][3]);
int main(void){
	int friendArr[][3]={{1,0,0},{2,0,0},{3,0,0}};
	iSolitude(friendArr);
}


int iSolitude(int arr[][3]){
	int col,row,sum[MAX_SIZE]={0},lfriends;


	for(col=0;col<MAX_SIZE;col++){

		for(row=0;row<MAX_SIZE;row++){
			sum[col]+=arr[row][col];
		}
		if(col==0){
			lfriends=sum[0];
		}
		if(lfriends>sum[col]){
			lfriends=sum[col];
		}
		

	}
	for(col=0;col<MAX_SIZE;col++){
		if(sum[col]<=lfriends){
			printf("%d",sum[col]);

		}
	}
}