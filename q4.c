#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=i;k<=4;k++)
		{
			  printf("  ",k);
		}
		   for(j=i;j>=1;j--)
		   {
		   	if(j%2==0)
		   	{
		   		printf("0");
			   }
		   	 else
		   	 {
		   	 	printf("1");
				}
		   }
		        printf("\n");
	}
}
