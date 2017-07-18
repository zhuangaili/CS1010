#include <stdio.h>
#define NAME_LENGTH 30
#define MAX_NUM_COURSES 20
#define MAX_NUM_STUDENTS 100

int readStudents(student_t students[], char *fileName);
int findStudentByName(student_t students[],int numberStudents, char name[]);
float averageScore(student_t stu);
typedef struct {
char name[NAME_LENGTH];
int numCourses;
int scores[MAX_NUM_COURSES];
} student_t;

int main(void){
	
}

int readStudents(student_t students[], char *fileName){
	int counter,int numCourses;
	if((fileName=fopen("filename.in"))==NULL){
		printf("file could not be opened");
	}
	else{
		
		while(!feof(fileName)){

			for(counter=0;counter<MAX_NUM_STUDENTS;counter++){
				fscanf("%s %d %d",students[counter].name,&students[counter].numCourses,&students[counter].score[counter]);
			}
		}

	}

	fclose(fileName);
	
}

int findStudentByName(student_t students[],int numberStudents, char name[]){
	int counter;
	for(counter=0;counter<numStudents;counter++){
		if(strcmp(students[counter].name,name[])==0){
			return counter;
		}
	}
	return -1;	

 }




float averageScore(student_t stu){
	int counter
	float score=0;
	for(counter=0;counter<stu.numCourses;counter++){
		score+=stu.scores[counter];
	}
	return score/stu.numCourses;
	
}