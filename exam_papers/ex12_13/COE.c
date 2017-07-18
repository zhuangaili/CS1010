#include <stdio.h>
#define MAX_SIZE 10
int bubble_sort(int arr[], int size);
void printArray(int arr[], int size);
int main (void){

	int coe[10]={1,100,2000,2,8,10000,1000,2,1000,10010	};
	int numCoe;
	bubble_sort(coe,10);
	printArray(coe,10);
	printf("Enter The number of COEs");
  numCoe=4;
	while(coe[MAX_SIZE-numCoe]==coe[MAX_SIZE-numCoe-1]&&MAX_SIZE-numCoe>0){
		numCoe-=1;
	}
	printf("The price of COE is %d", coe[MAX_SIZE-numCoe]);
}


int bubble_sort(int arr[],int size){
	int counter,temp,flag;

	do{
		flag=0;
		for(counter=1;counter<size;counter++){
			if(arr[counter-1]>arr[counter]){
				temp=arr[counter-1];
				arr[counter-1]=arr[counter];
				arr[counter]=temp;
				flag=1;
			}	
		}

	}while(flag==1);

}

void printArray(int arr[], int size){
	int counter;
	for(counter=0;counter<size;counter++){
		printf("%d ",arr[counter]);
	}
}