/**
 * CS1010 AY2016/7 Semester 1 Lab5 Ex2
 * elevator.c
 * <Type a description of the program here>
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>
#include <string.h>
#define CAPACITY 15
#define MAX_LEN 21
#define MAX_ELEVATORS 5

#define MIN(a,b) (a<b)?(a):(b)
#define MAX(a,b) (a>b)?(a):(b)

typedef struct { 
	int floor;
	int passenger;
	int usage;
	// Incomplete
} elevator_t;

void setupElevators(elevator_t [], int);
void readSequences(char [][MAX_LEN], int);
void runElevators(elevator_t [], char [][MAX_LEN], int);
void goToFloor(elevator_t *, int);
void printElevators(elevator_t [], int size);
int mostUsedElevator(elevator_t [], int);

// This function is given. You are NOT to modify it.
int main(void){
	int size;
	elevator_t elevators[MAX_ELEVATORS];
	char sequences[MAX_LEN][MAX_LEN];
	
	printf("Enter number of elevators: ");
	scanf("%d", &size);
	
	setupElevators(elevators, size);
	readSequences(sequences, size);
	
	runElevators(elevators, sequences, size);
	
	printElevators(elevators, size);
	printf("Most used elevator: %d\n", mostUsedElevator(elevators, size));
	
	return 0;
}

void setupElevators(elevator_t elevators[], int size){
	int counter;
	for(counter=0;counter<size;counter++){
		elevators[counter].floor=0;
		elevators[counter].passenger=0;
		elevators[counter].usage=0;	
	}
	// Incomplete
}	

// Read in the sequences of floors the elevators go to.
// This function is given. You are NOT to modify it.
void readSequences(char sequences[][MAX_LEN], int size){
	int i;
	
	for (i = 0; i<size; i++){
		printf("Enter sequence for elevator %d: ", i+1);
		scanf("%s", sequences[i]);
	}
}

void runElevators(elevator_t elevators[], char sequences[][MAX_LEN], int size){
	int counter,seq_counter, oiuoiu=0;
	for(counter=0;counter<size;counter++){
		while(sequences[counter][oiuoiu] != '\0'){
			goToFloor(elevators,sequences[counter][seq_counter]-'0');
			oiuoiu++;
		}
	}
	// Incomplete
}

void goToFloor(elevator_t *elevator, int floor){

	if(floor< elevator->floor){
		elevator->floor=floor;
		int placeholder = MIN((elevator->passenger-floor),0);
		elevator->usage+=(elevator->passenger-placeholder);
		elevator->passenger=placeholder;
	}
	else if(floor>elevator->floor){	
		elevator->floor=floor;
		elevator->passenger=MAX((elevator->passenger+floor),CAPACITY);

	}

	// Incomplete
}

void printElevators(elevator_t elevators[], int size){
	int counter;
	counter=0;
	for(counter=0;counter<size;counter++){
		printf("Elevator : %d\n",counter+1);
		printf("Floor: %d \n",elevators[counter].floor);
		printf("Number of passengers: %d \n",elevators[counter].passenger);
		printf("Usage: %d \n",elevators[counter].usage);
	}
}

int mostUsedElevator(elevator_t elevators[], int size){
	int most_used,counter;
	most_used=0;
	for(counter=0;counter<size;counter++){
		if(elevators[counter].usage>most_used){
			most_used=counter;
		}
	}
	return counter;
}
