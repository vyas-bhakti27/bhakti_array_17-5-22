//Q1)  Program to input values into an array and display them

#include<stdio.h>
main( )
{
int arr[5],i;
for(i=0;i<5;i++)
{
printf ("Enter the value for arr[%d]:",i); // input values of array from the user
scanf("%d",&arr[i]);
}
printf ("The array elements are : \n");  // printing values of arrays
for(i=0;i<5;i++)
printf("%d\t",arr[i]);
printf ("\n");
}
