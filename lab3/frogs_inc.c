/**
 * CS1010 AY2016/7 Semester 1 Lab3 Ex3
 * frogs.c
 * <Type your program description here>
 * <Type your name here>
 * <Type your discussion group here>
 */
#include <stdio.h>

int jump(int,int, int[]);
void printBridge(int,int[]);
int checkGameState(int,int, int[]);

int main(void) {

	int bridge[1008]={2}; //Duct tape
	int i;
	int lengthOfBridge;
	int position;

	int numMoves = 0;
	position=0;
	int gameState;

	printf("Please enter the length of the bridge: ");
	scanf("%d", &lengthOfBridge);

 	for (i=2; i<lengthOfBridge; i++) {
		int frogType;

		printf("Please insert frogs at position %d: ", i);
		scanf("%d", &frogType);

		bridge[i] = frogType;
	}

	printf("Input completed\n");
	printBridge(lengthOfBridge, bridge);

	do{
		printf("Please start moving the frogs\n");
		printf("Move the frog at position:\n");
		scanf("%d",&position);
		jump(position,lengthOfBridge,bridge);
		gameState=checkGameState(lengthOfBridge,numMoves,bridge);
	}while(gameState!=-1);

	


	/** Insert your code below **/


	return 0;
}

//This function is provided for you
/**
 * Prints out the current state on the bridge
 * @param size (int) represents the size of bridge
 * @param bridge[] contains the current state of the bridge
 **/
void printBridge(int size, int bridge[]) {

	int i;
	printf("Position: ");
	for (i=0; i<size; i++) {
		printf("%2d ", i);
	}
	printf("\n");

	printf("Bridge:   ");
	for (i=0; i<size; i++) {
		printf("%2d ", bridge[i]);
	}
	printf("\n");

}

//if arr[currentPos-1]+arr[currentPos]+arr[currentPos+1]=0
int jump(int currentPos, int length, int bridge[]){
	if(bridge[currentPos]==1){
		printf("Invalid move");
	}

	else{
		printf("Okay move");
	}
	return 0;
}

int checkGameState(int length,int jump_counter, int bridge[]){
	int counter;
	for(counter=0;counter<length;counter++){
		if(counter<length/2 && bridge[counter]!=-1){
			return -1;
		}
		else if (counter>length/2 && bridge[counter]!=1){
			return -1;
		}
		if(bridge[length-1]==0||bridge[0]==0){
			return -1;
		}
	}
	jump_counter+=1;
	return 1;
}

