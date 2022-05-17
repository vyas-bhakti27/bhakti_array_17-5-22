// Q6) Program for multiplication of two matrices


#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
main()
{
int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2],i,j,k;
printf("Enter the elements of mat1 (%dx%d) rOW-Wlse ; \n",ROW1, COL1) ;
for(i=0;i<ROW1;i++)
    for(j=0;j<COL1;j++)
    scanf ("%d", &mat1[i][j]);

printf ("Enter the elements of mat2 (%dx%d) rOW-Wlse ; \n",ROW2, COL2) ;
for(i=0;i<ROW2;i++)
    for(j=0;j<COL2;j++)
    scanf ("%d", &mat2[i][j]);
    
  
// Mutiplication of matrix    
for(i=0;i<ROW1;i++)
    for(j=0;j<COL2;j++)
    {
        mat3[i][j]=0;
        for(k=0;k<COL1;k++)
        mat3[i][j]+=mat1[i][k]*mat2[k][j]; 
    }
    printf ("The Resultant matrix mat3 is : \n") ;
for(i=0;i<ROW1;i++)
{
for(j=0;j<COL2;j++)
printf ("%5d" ,mat3[i][j]);  // print the mutiplication of two matrix
printf("\n");
}
}

    
