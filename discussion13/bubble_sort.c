#include <stdio.h>


int main(){
	int gate_keeper;
	int size=5;
	int i,temp;	
	int arr[]= {5,3,4,2,1};
	void printArray(int arr[],int );
	do{
		gate_keeper=0;	
		for(i=0;i<size-1;i++){
			if(arr[i]>arr[i+1]){
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				gate_keeper=1;

		 	}
		}


	}while(gate_keeper!=0);
	printArray(arr,5);

}

void printArray(int arr[],int size){
	int i;	
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}

}