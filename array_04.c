// Q4) Program to pass array elements to a function

#include<stdio.h>
main()
{
int arr[10],i;
printf("Enter the array elements ") ;
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
check(arr[i]);   // calling check function
}
}
check(int num)   // define the function
{
    if (num%2==0)
    printf("%dis even\n",num);  // print even
    else
    printf("%d is odd\n", num) ;  // print odd
}
