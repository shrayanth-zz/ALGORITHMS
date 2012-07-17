#include <stdio.h>
#define MAX 100

void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
void bubblesort(int ls[], int n)
{
   int i,j;
   for(i=0;i<(n-1);i++)
      for(j=0;j<(n-(i+1));j++)
             if(ls[j] > ls[j+1])
                    swap(&ls[j],&ls[j+1]);
}
void read(int ls[],int num)
{
   int i;
   printf("Enter elements : \n");
   for(i=0;i<num;i++)
       scanf("%d",&ls[i]);
}

void print(int ls[],int num)
{
   int i;
   for(i=0;i<num;i++)
      printf("%d\t",ls[i]);
}



void main()
{
   int list[MAX], n;
   printf("Enter the number of elements in the list: \n");
   scanf("%d",&n);
   read(list,n);
   bubblesort(list,n);
   printf("The sorted list is:\n");
   print(list,n);
   return 0;
}
