#include <stdio.h>

typedef struct{
	float vertex1[2];
	float vertex2[2];
	float vertex3[2];
}triangle;

triangle centroid(triangle Triangle);
int main(void){
	triangle tri;
	triangle median;
	int counter;
	printf("Coordinates of 1st vertex");
	scanf("%f %f",&tri.vertex1[0],&tri.vertex1[1]);
	printf("Coordinates of 2nd vertex");
	scanf("%f %f",&tri.vertex2[0],&tri.vertex2[1]);
	printf("Coordinates of 3rd vertex");
	scanf("%f %f",&tri.vertex3[0],&tri.vertex3[1]);
	median=centroid(tri);
	printf("%f %f",median.vertex1[0],median.vertex1[1]);

}

triangle centroid(triangle tri){
	triangle other_triangle;
	float mid1x,mid1y,mid2x,mid2y,mid3x,mid3y;
	mid1x=(tri.vertex1[0]+tri.vertex2[0]+tri.vertex3[0])/3;
	mid1y=(tri.vertex1[1]+tri.vertex2[1]+tri.vertex3[1])/3;
	other_triangle.vertex1[0]=mid1x;
	other_triangle.vertex1[1]=mid1y;
	return other_triangle;
}
