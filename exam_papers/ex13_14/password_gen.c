#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

void generate(char password[]);
int main(void){
char password[8]={'a'};
srand(time(NULL));
generate(password);
printf("%s",password);



}

void generate(char password[]){
	char alphabets[26]={'a','b','c','d','e','f','g','h','i','j','k','l','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	int counter,temp,random,other_random;
	for(counter=0;counter<8;counter++){
		if(counter<4){
			password[counter]=alphabets[rand()%26];

		}
		if(counter>=4 &&counter<6){
			password[counter]=toupper(alphabets[rand()%26]);
		}
		if(counter==6||counter==7){
			password[counter]=rand()%10+'0';
		}
	}
	//shuffle
	for(counter=0;counter<8;counter++){
		random=rand()%8;
		other_random=rand()%8;
		temp=password[random];
		password[random]=password[other_random];
		password[other_random]=temp;

	}
}