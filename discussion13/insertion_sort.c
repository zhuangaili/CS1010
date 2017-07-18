#include <stdio.h>
#define SIZE 10
int main(){
	int arr[]= {2,7,6,4,5,3,3};	
	void insertion_sort(int arr[],int );
	void print_array(int arr[], int);
	insertion_sort(arr,SIZE);
	print_array(arr,SIZE);

}


void print_array(int arr[],int size){
	int counter;
	for(counter=0;counter<size;counter++)
		printf("%d\n",arr[counter]);

}


void insertion_sort(int arr[],int size){
	int counter,temp,selected_elem;
	selected_elem=0;
	for(counter=1;counter<size-1;counter++){
		selected_elem=counter;
		while(selected_elem>0&&arr[selected_elem]<arr[selected_elem-1]){
			temp=arr[selected_elem];
			arr[selected_elem]=arr[selected_elem-1];
			arr[selected_elem-1]=temp;
			selected_elem--;
			/* code */
		}

	}

}