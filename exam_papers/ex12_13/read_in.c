#include <stdio.h>


int main(void){
FILE *infile;
int num, sum=0, count=0;
infile = fopen("numbers.txt", "r");
fscanf(infile, "%d", &num);
while (num > 0) {
sum += num;
count++;
 fscanf(infile, "%d", &num);
}
printf("%.2f\n", (double)(sum/count));
}