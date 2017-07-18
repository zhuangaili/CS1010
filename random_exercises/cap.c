// cap_skeleton.c
// Read a student's results and compute his CAP.
// This is a skeleton program for students.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>	
#define MAX_MODULES 50

// Define result_t and student_t below
struct result_t{
	char *module_code;
	char *grade;
	int modular_credits;
};
struct student_t{
	char *name;
	struct result_t result[MAX_MODULES];

};
typedef struct student_t Student;

void printResults( Student student, int);
float computeCAP(Student student, int);



int main(void) {
	Student student;

	int num_modules,counter;
	char testString[1007];
	char modular_credits[1007];
	char otherTestString[1007];
	char name[10007];
	num_modules=1;


	printf("Enter student's name:\n");
	fgets(name,6,stdin);
	student.name=name;
	printf("Enter number of modules taken:\n");
	num_modules=getchar()-'0';
	getchar();


	printf("Enter results of %d modules:\n", num_modules);
	for(counter=0;counter<num_modules;counter++){
		fgets(testString,10,stdin);
		student.result[counter].module_code=testString;
		fgets(otherTestString,4	,stdin);
		otherTestString[strcspn(otherTestString,"\n")]='\0';
		student.result[counter].grade=otherTestString;
		student.result[counter].modular_credits=getchar()-'0';
	}
	//printResults(student, num_modules); // for checking

	printf("CAP = %.2f\n", computeCAP(student, num_modules));

	return 0;
}

// Print results of the student
void printResults(Student student, int num_modules) {
	int i;

	printf("Student's name: %s\n", student.name);
	for (i=0; i<num_modules; i++)

		printf("  %-7s %-2s %d\n", student.result[i].module_code,
				student.result[i].grade, student.result[i].modular_credits);
}


float computeCAP(Student student, int num_modules) {

	int counter,modular_credits;
	float score;
	modular_credits=0;
	score=0;
	for(counter=0;counter<num_modules;counter++){
		modular_credits+=student.result[counter].modular_credits;
		printf("%s",student.result[counter].grade);
		if(strcmp((student.result[counter].grade),"A+")==0){
			score+=5.0*student.result[counter].modular_credits;

		}
		else if(strcmp(student.result[counter].grade,"A")==0){
			score+=4.5*student.result[counter].modular_credits;

		}
		else if(strcmp(student.result[counter].grade,"B+")==0){
			printf("%d",student.result[counter].modular_credits);
			score+=4.0*student.result[counter].modular_credits;


			
		}
		else if(strcmp(student.result[counter].grade,"B")==0){
			score+=3.5*student.result[counter].modular_credits;
		}
		else if(strcmp(student.result[counter].grade,"B-")==0){
			score+=3.0*student.result[counter].modular_credits;
			
		}
		else if(strcmp(student.result[counter].grade,"C+")==0){
			score+=2.5*student.result[counter].modular_credits;
			
		}
		else if(strcmp(student.result[counter].grade,"C")==0){
			score+=2.0*student.result[counter].modular_credits;
			
		}
		
		else if(strcmp(student.result[counter].grade,"D+")==0){
			score+=1.5*student.result[counter].modular_credits	;
			
		}
		else if(strcmp(student.result[counter].grade,"D")==0){
			score+=1.0*student.result[counter].modular_credits;

		}

	}


	return score/modular_credits;
}
