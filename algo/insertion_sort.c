#include <stdio.h>

int main(void){
	int arr[7]={1,2,3,4,5,6}
	int counter;
	sorted=arr[0];
	for(counter=1;counter<size;counter++){
		temp=arr[counter];
		for(counter2=0;counter2-counter>0;counter2++){
			if arr[counter2]>temp{
				temp2=arr[counter2];
				arr[counter2]=arr[counter2+1];
				arr[counter2]=temp;
			
			}
			break;
		}
		arr[counter]=arr[counter2];
	}
}