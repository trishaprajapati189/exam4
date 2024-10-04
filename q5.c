#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l;
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			  printf("  ",k);
		}
		   for(j=i;j<=5;j++)
		   {
		   	printf("%d ",j);
		   	k++;
		   }
		     for(l=4; l>=i; l--)
		     {
		     	printf("%d ",l);
			 }
		    printf("\n");
	} 
}