#include <stdio.h>
int get_min_index(int arr[],int size,int counter);
int main (void){
	int counter=0;
	int arr[10] = {20, 10, 4, 22, 6, 30, 4, 35, 99, 55};
	printf("%d",get_min_index(arr,10,counter));

}

int get_min_index(int arr[],int size, int counter){
	if(counter==size){
		return counter;
	}
	else if(arr[counter]>arr[size-1]){
		return get_min_index(arr,size,counter+1); 
	}
	else{
		return get_min_index(arr,size-1,counter);
	}
	return counter;	
}	