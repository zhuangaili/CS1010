

int read_results(module_t modules[7]){
	FILE *fp
	int num_modules,counter;
	if((fp=fopen('results.in','r'))==NULL){
		printf("File cannot be opened");
		exit(1);
	}
	else{
		num_modules=getchar()-'0';
		getchar();
		for(counter=0;counter<num_modules;counter++){
			fscanf(fp,17,"%d\n%s\n%d\n%s\n",modules[counter].code,&modules[counter].mc,modules[counter].grade,modules[counter.su]);
			modules[counter].su=toupper(modules[counter].su);
		}

	}
}



Questions
1)Must I eat the newline?
2)Is the formatting correct?
3)is there a better way to do?