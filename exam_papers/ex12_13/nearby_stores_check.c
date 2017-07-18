#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_STORES 100
#define MAX_PRODUCTS 10

typedef struct{
	char pname[31];
	float cost_price;
	float retail_price;
}product_t;

typedef struct {
	char      sname[13];
	int       x, y;
	float     radius;
	int       numProduct;
	product_t products[MAX_PRODUCTS];
} store_t;


int readStores(store_t []); 
int withinRadius(int, int, store_t);
void printNearbyStores(int, int, store_t [], int); 

int main(void){
	store_t storeList[MAX_STORES];
	int numStore, userX, userY;
	
	numStore = readStores(storeList);	
		
	
	
	return 0;
}

// Read the number of stores and details of each store 
// into array storeList.
// Return the number of stores.
int readStores(store_t storeList[]) {
	int numStore,counter,prod_counter;
	FILE *fp, *outfile;
	if((fp=fopen("stores.in","r"))==NULL){
		printf("File could not be opened");
		exit(1);
	}
	if ((outfile = fopen("formatted.out", "w")) == NULL) {
		printf("Cannot open file \"formatted.out\"\n");
		exit(2);
	}
	else{
		scanf("%d",&numStore);
		for(counter=0;counter<numStore;counter++){
			fscanf(fp, "%s %d %d %d",storeList[counter].sname,&storeList[counter].x,&storeList[counter].y,&storeList[counter].numProduct);
			fprintf(outfile, "Data read: %s %d %d %d",storeList[counter].sname,storeList[counter].x,storeList[counter].y,storeList[counter].numProduct);

			for(prod_counter=0;prod_counter<storeList[counter].numProduct;prod_counter++){
				fscanf(fp,"%s %f %f",storeList[counter].products[prod_counter].pname,&storeList[counter].products[prod_counter].cost_price,&storeList[counter].products[prod_counter].retail_price);
				fprintf(outfile, "Data read: %s %f %f\n",storeList[counter].products[prod_counter].pname,storeList[counter].products[prod_counter].cost_price,storeList[counter].products[prod_counter].retail_price);
			}
		}

	}
	fclose(fp);
}