#include <stdio.h>
int selectionSort(int arr[],int size);
void printArray(int arr[],int size);
int main(void){
	int arr[6]={6,4,9,6,3,7};
	int size=6;
	selectionSort(arr,size);
	printArray(arr,size);
}

int selectionSort(int arr[],int size){
	int counter,min,temp,other;
	for(counter=0;counter<size-1;counter++){
		min=counter;
		for(other=counter+1;other<size;other++){
			if(arr[min]>arr[other]){
				min=other;
			}
		}
		temp=arr[counter];
		arr[counter]=arr[min];
		arr[min]=temp;
	}
	
}



void printArray(int arr[],int size){
	int counter;
	for(counter=0;counter<size;counter++){
		printf("%d ",arr[counter]);
	}
}