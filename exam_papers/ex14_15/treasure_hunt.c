#include <stdio.h>
#define SIZE 5
void factorize(int size, int *arr);
int main(void){
	//int sumTreasures(int [][5], int, int, int, int)
	int factor[15]={0};
	int arr[5][5]={{1,3,3,1,1},{1,6,1,2,1},{2,1,8,1,5},{1,1,8,1,5},{1,4,1,1,4}};
	int counter,row,col,sum=0,max=0;
	factorize(6,factor);
	for(counter=0;counter<12;counter++){
		for(row=0;row+factor[counter]<SIZE;row++){
			for(col=0;col+factor[counter+1]<SIZE;col++){
				sum+=arr[row][col];
			}
			if(sum>max){
				max=sum;
			}
		}
	}
	printf("%d",max);
}
/*
int treasureHunt(int [][5], int size, int value ){
	
}
*/

void factorize(int size,int *factor){
	int counter,other_counter=0;
	for(counter=1;counter<size;counter++){
		if(size%counter==0){
			factor[other_counter]=counter;
			factor[other_counter+1]=size/counter;
			other_counter+=2;
	  	}
  }

 
}