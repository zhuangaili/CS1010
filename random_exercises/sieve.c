#include <stdio.h>
int findPrimes(int n, int primes[]);
int main(void){
	int primes[10000]={0};	
	findPrimes(30,primes);
}



int findPrimes(int n, int primes[]){
	int mult=2;
	int counter;
	int i;
	int numPrimes=0;

	

	for(counter=2;counter*counter<=n;counter++){
		
			if(primes[counter]==0){
				mult=2;
				while(mult*counter<=n){
					primes[mult*counter]=1;
					mult++;
				}
				/*
				 for (int i=counter*2; i<=n; i += counter){
                	primes[i] =1;
       			 }
       			 */
			
		}
	}
	for(counter=2;counter<n;counter++){
		numPrimes+=primes[counter];
		if(!primes[counter]){
			printf("%d ",counter);
		}

	}
	return numPrimes;
}