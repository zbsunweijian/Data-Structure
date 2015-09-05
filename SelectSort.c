/*对顺序表进行简单选择排序*/

void SelectSort(SqList *L)
{
	int i,j,min;
	for(i = 1;i< L->length;i++)
	{
		min = i;
		for(j = i+1;j <=L->length;j++)
		{
			if(L->r[min] > L->r[j])
				min = j;
		}
		if(i != min)
			swap(L,i,min);
	}
}