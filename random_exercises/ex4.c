/**
 * CS1010 AY2016/7 Semester 1 Lab2 Ex4
 * montecarlo.c
 * <Type your name here>
 * <Type your discussion group here>
 * <Fill in a description of this program>
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



// Given function prototype must not be changed
float throw_darts(int darts_total);

int main(void) {
	int darts_total,   // number of darts to be thrown
	    darts_inside;  // number of darts inside quadrant

	printf("How many darts? ");
	scanf("%d", &darts_total);
	printf("%d", RAND_MAX);
	/**printf("%f",throw_darts(darts_total));**/
	return 0;
}



/** This function takes the number of darts**/

float throw_darts(int darts_total){
	float x,y,darts_inside;
	int counter;
	srand(time(NULL));	
	darts_inside=0;
	
	for(counter=0;counter<darts_total;counter++){
		x=rand()/(double)RAND_MAX;
		y=rand()/(double)RAND_MAX;

		if((pow(x,2)+pow(y,2))<=1){
			darts_inside++;
		}

	/** proportion of darts landing on the area over total number of darts thrown is the same as pi/4 **/
		
	}

	return darts_inside*4/darts_total;
}
