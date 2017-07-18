#include <stdio.h>
#include <string.h>
#include <stdlib.h>    
#define MAX_MODULES 50


struct result_t{
    char * module_code;
    char * grade;
    int modular_credits;
};
struct student_t{
    char *name;
    struct result_t result[MAX_MODULES];

};
typedef struct student_t Student;


int main(void) {
    Student student;

    int num_modules,counter;
    num_modules=0;


    printf("Enter student's name: ");
    scanf("%s",student.name);
    printf("Enter number of modules taken: ");
    scanf("%d", &num_modules);


    printf("Enter results of %d modules:\n", num_modules);
    for(counter=0;counter<num_modules;counter++){
        scanf("%s",student.result[counter].module_code);
        printf("%s",student.result[counter].module_code);
        scanf("%s",student.result[counter].grade);
        printf("%s",student.result[counter].grade);

    }

    return 0;
}