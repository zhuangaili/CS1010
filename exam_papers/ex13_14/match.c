#include <stdio.h>
#include <string.h>
int match(char seq1[], char seq2[]);
void swapString(char seq1[]);

int main(void){
	char seq1[50]="ATGC";
	char seq2[70]="GATAAAA";
	match(seq1,seq2);

}


int match(char seq1[50], char seq2[70]){
	swapString(seq1);
	int counter,counter2=0;
	for(counter=0;counter<(strlen(seq2)-strlen(seq1));counter++){
		printf("%s\n",seq2+counter);
		if(strncmp(seq1,seq2+counter,strlen(seq1))==0){
			printf("yay");
			return 1;
		}
	}
	printf("no");
	return 0;

}


void swapString(char seq1[]){
	int counter;

	for(counter=0;counter<strlen(seq1);counter++){
		if(seq1[counter]=='A'){
			seq1[counter]='T';
		}
		else if(seq1[counter]=='T'){
			seq1[counter]='A';
		}
		else if (seq1[counter]=='G'){
			seq1[counter]='C';
		}
		else if(seq1[counter]=='C'){
			seq1[counter]='G';
		}
	}

}