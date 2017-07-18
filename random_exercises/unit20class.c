// Week12_TeamMate.c
#include <stdio.h>
#include <string.h>

#define MAX_PLAYER  5
#define STR_LENGTH 20

typedef struct {	
	char name[STR_LENGTH+1]; 
	int age; 
	char gender;
} player_t;


void read_players(player_t []);
void print_players(player_t []);
int search_teammate(player_t [], char []);

int main(void) {
	player_t players[MAX_PLAYER];
	char player_name[STR_LENGTH+1];
	int  result;

	read_players(players);
	print_players(players);

	printf("Enter a player's name: ");
	scanf("%s", player_name);
	
	result = search_teammate(players, player_name);

	printf("\n");
	if (result == -2)
		printf("No such player %s.\n", player_name);
	else if (result == -1)
		printf("Sorry, we cannot find a teammate for %s!\n", player_name);
	else
		printf("%s's compatible teammate is %s.\n", player_name, players[result].name);

	return 0;
}

// Read information of players 
void read_players(player_t players[]) {
	int i;

	printf("Enter %d players' info:\n", MAX_PLAYER);
	for (i=0; i<MAX_PLAYER; i++) {
		scanf("%s %d %c", players[i].name, &players[i].age, &players[i].gender);
	}
}

// Print players' information
void print_players(player_t players[]) {
	int i;

	printf("\nThe list of players are:\n");
	printf("Name\tAge\tGender\n");
	for (i=0; i<MAX_PLAYER; i++) {
		printf("%s\t%d\t%c\n", players[i].name, players[i].age, players[i].gender);
	}
}

// Search for a player's compatible teammate
// Return index in array if compatible teammate found, or
//        -1 if compatible teammate not found, or
//        -2 if player not found
int search_teammate(player_t players[], char player_name[]) {
	int counter;
	for(counter=0;counter<MAX_PLAYER;counter++){
		if(strcmp(players[counter].name,player_name)==0){
			return counter;
		}
	}

	return 2;
}