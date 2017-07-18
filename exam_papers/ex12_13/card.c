#include <stdio.h>
#include <stdlib.h>
#define DECK_SIZE 52
typedef struct{
	char rank;
	char suit;

}card_t;

void initDeck(card_t card[DECK_SIZE]);
void printDeck(card_t card[DECK_SIZE]);
void shuffleDeck(card_t card[DECK_SIZE]);
int computePoints(card_t []);
int main (void){
	card_t deck[DECK_SIZE];
	initDeck(deck);
	//printDeck(deck);

	//printf("\n");
	shuffleDeck(deck);
	printDeck(deck);
	printf("%d",computePoints(deck));
	
}

void initDeck(card_t card[DECK_SIZE]){
	int counter,scounter=0;
	char rank[13]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
	char suit [4]={'C','D','H','S'};
	for(counter=0;counter<DECK_SIZE;counter++){
		card[counter].rank=rank[counter%13];
		if(counter%13==0&&counter!=0){
			scounter++;
		}
		card[counter].suit=suit[scounter];
	}
}

void printDeck(card_t card[DECK_SIZE]){
	int counter;
	
	for(counter=0;counter<DECK_SIZE;counter++){
		printf("%c%c ",card[counter].rank,card[counter].suit);
	}
}


void shuffleDeck(card_t card[DECK_SIZE]){
	int counter,random;
	card_t temp;
	
	for(counter=0;counter<DECK_SIZE;counter++){
		random=rand()%52;
		temp=card[counter];
		card[counter]=card[random];
		card[random]=temp;
	}
}


int computePoints(card_t card[]){
	int counter,points=0;
	int pointCounter[4];
	for(counter=0;counter<13;counter++){
		switch(card[counter].suit){
			case 'C': pointCounter[0]+=1;
					break;
			case 'D': pointCounter[1]+=1;
					break;
			case 'H': pointCounter[2]+=1;
					break;
			case 'S': pointCounter[3]+=1;
					break;
		}
	}
	for(counter=0;counter<4;counter++){
		if(pointCounter[counter]==0){
			points+=3;
		}
		else if (pointCounter[counter]==1){
			points+=2;
		}
		else if (pointCounter[counter]==2){
			points+=1;
		}
		
	}
	return points;
}