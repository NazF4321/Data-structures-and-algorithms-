#include<stdio.h>
int main()
{
	int i,first,last,middle,n,rollno,arr[100];
	printf("enter no. of students:");
	scanf("%d",&n);
	printf("enter %d roll number in ascending order:\n",n);
	for(i=0;i<n;i++)	
	scanf("%d",&arr[i]);
	printf("enter the roll no to be searched:");
	scanf("%d",&rollno);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]==rollno)
		{
			printf("%d found of location %d \n",rollno,middle);
			break;
		}
		else if (arr[middle],rollno)
		first=middle+1;
		else
		last= middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("not found! %d is not present in the list\n",rollno);
	return 0;
	
}
