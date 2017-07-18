/**
 * CS1010 AY2016/7 Semester 1 Lab3 Ex2
 * subsequence.c
 * This program reads in a list of integers and find the
 * k-interval subsequence with the largest sum.
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>

int scan_list(int []);
void sum_subsequence(int [], int, int []);

int main(void) {
	int list[10], size; // array and actual number of elements entered
	int answers[3];     // stores the required answers

	size = scan_list(list); 

	sum_subsequence(list, size, answers);

	printf("Max sum %d of %d-interval subsequence starting at position %d.\n",
			answers[0], answers[1], answers[2]);

	return 0;
}

// Read in elements for the array arr and returns the 
// number of elements read.
// Postcond: i > 0
int scan_list(int arr[]) {
	int num, i;

	printf("Enter number of elements: ");
	scanf("%d", &num);
	printf("Enter %d element%s: ", num, (num>1)?"s":"");
	for (i=0; i<num; i++) {
		scanf("%d", &arr[i]);
	}

	return num;
}

// Write a description for this function below
// ...
// ...
//   ans[0] = maximum sum of solution subsequence
//   ans[1] = interval k of the solution subsequence
//   ans[2] = start position of the solution subsequence
void sum_subsequence(int arr[], int size, int ans[]) {
	int interval,counter,start_pos,sum;
	ans[2]=0;
	sum=0;
	for(start_pos=0;start_pos<size;start_pos++){
		for(interval=1;interval<=size;interval++){
			for(counter=0;(start_pos+counter)<size;counter+=interval){
				sum+=arr[start_pos+counter];
			}
			if (sum>ans[0]){
				ans[0]=sum;
				ans[1]=interval;
				ans[2]=start_pos;
				printf("%d\n",start_pos);
				sum=0;
			}
			else if (sum==ans[0] && interval>ans[1]){
				sum=0;
			}
			else{
				sum=0;
			}

		}

	}

	// fill in the code

}
