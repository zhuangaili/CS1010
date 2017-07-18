#include <stdio.h>
void print(int n);
int main(void){
	print(125);

}

void print(int n){
	int counter,j;
	for(counter=2;counter<n;counter++){
		if(counter%2==0){
			j=counter;
			while(j>1&&j%2==0){
				j=j/2;				
				if(j==1){
					printf("%d",counter);
				}
			}
		}
		if(counter%5==0){
			j=counter;
			while(j>0 &&j%5==0){
				j=j/5;
				if(j==1){
					printf("%d",counter);
				}
			}
		}
	}
	
}