#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i,j,k,l;
	for(i=5;i>=1;i--)
	{
		for(k=i;k<=5;k++)
		{
			  printf("  ");
		}
		   for(j=1;j<=i;j++)
		   {
		   	printf("%d ",j);
		   	k++;
		   }printf("\n");
		    
	}
}