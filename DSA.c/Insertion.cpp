#include<stdio.h>
int main()
{
   int i, j, n, temp, arr[25];
   printf("Enter How many elements to be sorted: ");
   scanf("%d",&n);
   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   for(i=1;i<n;i++)
   {
      temp=arr[i];
      j=i-1;
      while((temp<arr[j])&&(j>=0))
	  {
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=temp;
   }
   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);
   return 0;
}
