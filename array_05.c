//Q5) Program to input and display a matrix.


#define ROW 3
#define COL 4
#include<stdio.h>
main()
{
int mat[ROW] [COL], i, j;
printf ("Enter the elements of matrix (%dx%d) rOW-Wlse ; \n",ROW, COL) ;
for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    scanf ("%d", &mat[i][j]);  // giving values to matrix taking from user
    printf ("The matrix that you have entered is ; \n") ;
for(i=0;i<ROW;i++)
{
    for(j=0;j<COL;j++)

    printf("%5d",mat[i] [j]);   // priting elements of matrix
    printf("\n") ;
}
printf("\n") ;
}
