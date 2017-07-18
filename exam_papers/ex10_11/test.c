#include <stdio.h>

int iLow(int a[], int i, int j);
int main(void){
	int arr[10] = {20, 10, 4, 22, 6, 30, 4, 35, 99, 55};
	printf("%d",iLow(arr,0,9));
}




int iLow(int a[], int i, int j){

    if( i == j ) return j;

    if( a[i] > a[j] )
		return iLow( a, i+1, j );
       
	return iLow( a, i, j-1 );
}
