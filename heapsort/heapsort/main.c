#include <stdio.h>
#define MAX 10
void swap(int *a,int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

void sift( int l[],int i, int n)
{
   int j,k,flag;
   k = l[i];
   flag = 1;
   j = 2 * i;
   while(j <= n && flag)
   {
      if(j < n && l[j] < l[j+1])
      j++;
      if( k >= l[j])
               flag =0;
      else
      {
         l[j/2] = l[j];
         j = j *2;
      }
   }
   l [j/2] = k;
}

void buildheap( int ls[], int num)
{
   int i;
   for(i=(num/2);i>=0;i--)
       sift(ls,i,num-1);
}

void heapsort(int ls[],int num)
{
   int i;
   buildheap(ls,num);
   for(i=(num-2); i>=0;i--)
   {
      swap(&ls[0],&ls[i+1]);
      sift(ls,0,i);
   }
}

void read(int ls[],int num)
{
   int i;
   printf("Enter the elements\n");
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
   printf("Enter the elements in the list =\n");
   scanf("%d",&n);
   read(list,n);
   heapsort(list,n);
   printf("The sorted list:\n");
   print(list,n);
   return 0;
}

