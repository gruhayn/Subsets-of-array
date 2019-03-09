#include <stdio.h>
#include <math.h>

void printArray(char *array,int *pointer,int N);
void increase(int *pointer,int N);



int main(int argc, char const *argv[])
{
	int N,i;

	printf("Enter size of array:");scanf("%d",&N);
	
	char array[N];
	int pointer[N];


	printf("Enter array.\n");
	for (i = 0; i < N; ++i)
	{
		printf("%d. number:",i+1);
		scanf("\n%c",&array[i]);	
		pointer[i]=0;	
	}
	printf("Bit");
	for (i = 0; i <N-3 ; ++i)
	{
		printf(" ");		
	}
	printf("Subset\n");
	for(i=0;i<pow(2,N);i++)
	{
		printArray(array,pointer,N);
		increase(pointer,N);
	}



	return 0;
}

void printArray(char *array,int *pointer,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d",pointer[i] );
	}
	printf("   ");
	for (i = 0; i <N; ++i)
	{
		if(pointer[i]==1)
		{
			printf("%c",array[i]);
		}
	}
	printf("\n");
}
void increase(int *pointer,int N)
{
	int i=N-1;
	pointer[N-1]=pointer[N-1]+1;
	for(i=N-1;i>0;i--)
	{
		if(pointer[i]==2)
		{
			pointer[i]=0;
			pointer[i-1]++;
		}
	}
}
