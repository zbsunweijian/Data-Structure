#include<stdio.h>
#include<malloc.h>
#define maxsize 1024

typedef char datatype;
typedef struct
{
	datatype data[maxsize];
	int last;
}sequenlist;
/*�ڵ�i��Ԫ��Ǯ����Ԫ��x��ע�⣺Ԫ�ش�0��ʼ������*/
int insert(sequenlist *L,datatype x,int i)
{
	int j;
	if(L->last == maxsize - 1)
	{
		printf("overflow");
		return 0;
	}
	else if((i < 0)||(i > L->last))
	{
		printf("error,please input the rifht ��i��");
		return 0;
	}
	else
	{
		for(j = L->last;j >= i;--j)
		{
			L->data[j+i] = L ->data[j];
			L->data[i] = x;
			L->last = L->last + 1;
		}
	}
	return 1;
}

/*ɾ����i��Ԫ�أ�Ԫ�ش�0��ʼ����*/
int dellist(sequenlist *L,int i)
{
	if((i < 0) ||(i > L->last))
	{
		printf("error,please input the right i");
		return 0;
	}
	else
	{
		for(;i < L->last;++i)
		{
			L->data[i] = L ->data[i+1];
			L->last = L->last - 1;
			return 1;
		}
	}
}

/*����˳�����Ԫ��Ϊ�����ַ�*/
void creatlist(sequenlist *L)
{
	int n,i;
	char tmp;
	printf("���������ݵĸ�����\n");
	scanf("%d",&n);
	for(i = 0;i < n;++i)
	{
		printf("data[%d] = ",i);
		fflush(stdin);
		scanf("%c",&tmp);
		L->data[i] = tmp;
	}
	L->last = n - 1;
	printf("\n");
}

/*��ӡ˳���*/
void printout(sequenlist *L)
{
	int i;
	for(i = 0;i <= L->last;++i)
	{
		printf("data[%d] = ",i);
		printf("%c\n",L->data[i]);
	}
}

int main(void)
{
	sequenlist *L;
	char cmd,x;
	int i;
	L = (sequenlist *)malloc(sizeof(sequenlist));
	creatlist(L);
	printout(L);
	do
	{
		printf("i,I...����\n");
		printf("d,D...ɾ��\n");
		printf("q,Q...�˳�\n");
		do
		{
			fflush(stdin);
			scanf("%c",&cmd);
		}while((cmd != 'd')&&(cmd != 'D')&&(cmd != 'q')&&(cmd != 'Q')&&(cmd != 'i')&&(cmd != 'I'));
		switch(cmd)
		{
		case 'i':
		case 'I':
			printf("Please input the data :");
			fflush(stdin);
			scanf("%c",&x);
			printf("Please input the set of date :");
			scanf("%d",&i);
			insert(L,x,i);
			printout(L);
			break;
		case 'd':
		case 'D':
			printf("Please input the set of the data which do you want to delite :");
			fflush(stdin);
			scanf("%d",&i);
			dellist(L,i);
			printout(L);
			break;
		}
	}while((cmd != 'q')&&(cmd != 'Q'));
	return 0;
}