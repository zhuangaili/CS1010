// schedule_skeleton.c
// This program reads a schedule of lessons, and computes
// the longest lesson, the number of free periods, and the
// most number of concurrent lessons.
// Version 1: Using a timeline array

#include <stdio.h>
#include <math.h>
#define MAX_INTERVALS 20
#define LATEST_FINISH 1000

typedef struct {
	int start, finish;
} interval_t;

int read_intervals(interval_t []);
void print_intervals(interval_t [], int);
int longest_interval(interval_t [], int);
void create_timeline(int [], interval_t [], int);
void print_timeline(int []);
int free_periods(int []);
int most_concurrent(int []);

int main(void) {
	int        numIntervals; 
	interval_t intervals[MAX_INTERVALS];
	int        timeline[LATEST_FINISH] = { 0 };

	numIntervals = read_intervals(intervals);
	// print_intervals(intervals, numIntervals); // for checking

	printf("Duration of longest lesson = %d\n", 
	       longest_interval(intervals, numIntervals));

	create_timeline(timeline, intervals, numIntervals);
	//print_timeline(timeline); // for checking

	printf("Number of free periods: %d\n", 
			free_periods(timeline));

	printf("Most number of concurrent lessons: %d\n", 
			most_concurrent(timeline));

	return 0;
}

// Read data into intervals array, and return the number of intervals read.
int read_intervals(interval_t intervals[]) {
	int i, size; // size = number of intervals to be read

	printf("Enter number of intervals: ");
	scanf("%d", &size);

	printf("Enter %d intervals:\n", size);
	for (i=0; i<size; i++) {
		scanf("%d %d", &intervals[i].start, &intervals[i].finish);
	}
	return size;
}

// Print the intervals array 
void print_intervals(interval_t intervals[], int size) {
	int i;
	for (i=0; i<size; i++) 
		printf("%2d: %d %d\n", i, intervals[i].start, intervals[i].finish);
}

// Compute the longest interval
int longest_interval(interval_t intervals[], int size) {
	int counter,longest_interval;
	longest_interval=0;
	for(counter=0;counter<size;counter++){
		if(fabs(intervals[counter].finish-intervals[counter].start)>longest_interval){
			longest_interval=fabs(intervals[counter].finish-intervals[counter].start);
		}
	}
	return longest_interval;

	return 123; // this is a stub
}

// Create a timeline array.
// timeline[i] contains a value which indicates the number of
// lessons going on between times i and i+1
void create_timeline(int timeline[], interval_t intervals[], int size) {
	int counter,counter_ext;

	for(counter_ext=0;counter_ext<size;counter_ext++){
		for(counter=intervals[counter_ext].start;counter<=intervals[counter_ext].finish;counter++){
			timeline[counter]+=1;
		}
	}

}

// Print the timeline array
// Print only the elements whose value is positive
void print_timeline(int timeline[]) {
	int i;

	for (i=0; i<LATEST_FINISH; i++) 
		if (timeline[i] > 0)
			printf("%3d: %d\n", i, timeline[i]);
}

// Compute the number of free periods during which 
// no lesson is going on.
int free_periods(int timeline[]) {
	int counter,free_periods;
	free_periods=0;
	for(counter=0;counter<LATEST_FINISH;counter++){
		if(fabs(timeline[counter]-timeline[counter+1])>=1 &&timeline[counter]>=1){
			free_periods+=1;
		}
	}

		return free_periods; // this is a stub
}

// Compute the most number of concurrent lessons.
int most_concurrent(int timeline[]) {
	int counter,maximum;
	maximum=0;
	for(counter=0;counter<LATEST_FINISH;counter++){
		if(timeline[counter]>maximum){
			maximum=timeline[counter];
		}
	}
	return maximum;
}
