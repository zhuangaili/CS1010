#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_array(int arr[],int size);
void print_array(int arr[],int size);
int reverse_array(int arr[], int size);


int main(void){
	int arr[15]={};
	fill_array(arr,6);
	print_array(arr,6);
	reverse_array(arr,6);
	print_array(arr,6);
}




void fill_array(int arr[], int size){
	int counter;
	srand(time(NULL));

	for(counter=0; counter<size;counter++){
		arr[counter]=rand()%10;
	}
}

void print_array(int arr[], int size){
	int counter;
	for(counter=0;counter<size;counter++){
		printf("%d ",arr[counter]);
	}
}

int reverse_array(int arr[],int size){
	int start,end,temp;
	start=0;
	end=size-1;
	if(start<end){
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;

		reverse_array(arr+1,size-2);
	}
	
}