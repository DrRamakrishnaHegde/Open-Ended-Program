#include<stdio.h>
// Input should be entered as as input1 input 2 format only
int main()
{
  int n, sum, a[10], i;
  print("Enter number elements")
    scan("%d", n);
   for(i=0; i<n;i++)
   {
     scanf("%d", a[i]);
  sum = sum+a[i];
   }
  printf("Sum = %d", sum);
}
