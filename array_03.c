//Q3) Program to count the even and odd numbers in a array

#include<stdio.h>
#define SIZE 10
main()
{
int arr [SIZE] , i, even=0 , odd=0;
for(i=0;i<SIZE;i++)
{
printf ("Enter the value for arr[%d] :",i);
scanf("%d",&arr[i]) ;
if(arr[i]%2==0)
even++;
else
odd++;
printf("Even numbers %d, Odd numbers =%d\n", even, odd ); // count the no. of even or odd no. user will enter
}
}
