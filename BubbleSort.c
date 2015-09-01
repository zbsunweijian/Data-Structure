#include<stdio.h>

#define MAXSIZE 10
typedef struct 
{
	int r[MAXSIZE+1];
	int length;
}SqList;

void swap(SqList *L,int i,int j)
{
	int temp;
	temp = L->r[i];
	L->r[i] = L->r[j];
	L->r[j] = L->temp;
}
//a normal BubbleSort
void BubbleSort(SqList *L)
{
	int i,j;
	for(i = 1,i < L->length;i++)
	{
		for(j = L-length-1;j >= i;j--)
		{
			if(L->r[j] > L->r[j+1])
			{
				swap(L,j,j+1);
			}
		}
	}
}