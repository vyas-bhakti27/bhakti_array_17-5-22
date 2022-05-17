//Q2) Program to add the elements of an array.

#include<stdio.h>
main ( )
{
int arr[10],i,sum=0;
for(i=0;i<10;i++)
{
printf ("Enter the value for arr [%d] : ",i);
scanf("%d",&arr[i]);
sum+=arr[i];
printf ("Sum = %d\n", sum) ;  // adding elements of array
}
}
