#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct tile{
		float length;
		float width;
		float price_per_square_meter;
	};
typedef struct tile Tile;
int scan_tiles( Tile tiles[]);
float difference( Tile   tiles[], int);
int main(void){
	// To read tiles’ data into array tiles
	// Return the number of tiles read
	// Return the difference in cost between cheapest
	// tile and most expensive tile in the array tiles
	Tile tiles[20];
	int size;
	size=0;
	size=scan_tiles(tiles);

	printf("%f\n",difference(tiles,size));



}








float difference(Tile tiles[], int size){
	int counter,counter2;
	float price_outer,price_inner,price_difference;
	price_difference=0;
	for(counter2=0;counter2<size;counter2++){
		for(counter=1;counter<size;counter++){
			price_outer=tiles[counter2].length*tiles[counter2].width*tiles[counter2].price_per_square_meter;
			price_inner=tiles[counter].length*tiles[counter].width*tiles[counter].price_per_square_meter;
			if (fabs(price_outer-price_inner)>price_difference){
				price_difference=fabs(price_outer-price_inner);
			}
		}
	}
	return price_difference;



}


int scan_tiles(Tile tiles[]){
	int num_tiles,counter;
	printf("Please Enter the number of tiles");
	scanf("%d",&num_tiles);
	printf("Enter data for %d tiles \n",num_tiles);
	for(counter=0;counter<num_tiles;counter++){
		scanf("%f%f%f",&(tiles[counter].length),&(tiles[counter].width),&(tiles[counter].price_per_square_meter));
		printf("%f\t%f\t%f\t\n",tiles[counter].length,tiles[counter].width,tiles[counter].price_per_square_meter);
	}
	return num_tiles;

}
