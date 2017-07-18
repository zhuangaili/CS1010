#include <stdio.h>
#define N 4

int rotateMatrix(int mat[][N],int tran[][N]);
void displayMatrix(int mat[N][N]);
 
/* Driver program to test above functions */
int main()
{
    // Test Case 1
    /*
    int mat[N][N] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    */
    int mat[N][N] =
    {
        {0, 0, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0}
    };
    int tran[N][N]={0};
    // Tese Case 2
    /* int mat[N][N] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}
                    };
     */
 
    // Tese Case 3
    /*int mat[N][N] = {
                    {1, 2},
                    {4, 5}
                };*/
 
    //displayMatrix(mat);
 
    tran[N][N]=rotateMatrix(mat,tran);
 
    // Print rotated matrix
    displayMatrix(tran);
 
    return 0;
}

int rotateMatrix(int mat[][N],int tran[N][N])
{
    int row,col,temp;
    // Consider all squares one by one
    for(row=0;row<N;row++){
        for(col=0;col<N;col++){
            tran[col][row]=mat[row][col];

        }
        
    }
    for(row=0;row<N;row++){
        for(col=0;col<N/2;col++){
            temp=tran[row][col];
            tran[row][col]=tran[row][N-col-1];
            tran[row][N-col-1]=temp;

        }
    }


    return tran[N][N];
}
 
// Function to print the matrix
void displayMatrix(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%2d ", mat[i][j]);
 
        printf("\n");
    }
    printf("\n");
}