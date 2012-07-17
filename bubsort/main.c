#include<io.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int a[50],i,j,k,temp,n,c;
	printf("\n Enter the number of elements :" );
	scanf ("%d",&n);
	for (i = 0; i < n; i++)
	{
		printf ("\n Enter element %d :",i+1);
		scanf ("%d",&a[i]);
	}
	printf("\n Unsorted list:\n");
	for(i = 0; i < n; i++)

	printf ("%d \n", a[i]);
	printf ("\n");
	/* sort*/
	for (i = 0; i < n-1 ; i++)
	{
		c=0;
		for (j = 0; j <n-1-i; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				c++;
			}
		}
		if (c==0) 
		break;
		printf("\nAfter Pass %d elements are :  ",i+1);
		for (k = 0; k < n; k++)
		printf("%d \n", a[k]);
		printf("\n");
	}
	printf("\n Sorted List is :\n");
	for (i = 0; i < n; i++)
	printf("%d \n", a[i]);
	printf("\n Enter any key to continue");
        getchar();

    return (0);
}
