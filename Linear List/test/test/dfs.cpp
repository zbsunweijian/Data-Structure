#include<stdio.h>
#include<string.h>
char FindChar(char *str)
{
	char a;
	int hash[128];
	int i;
	memset(hash,0,sizeof(hash));
	for(i=0;str[i];++i)
	{
		hash[str[i]]++;
	}
	for(i = 0;i<128;++i)
	{
		if(hash[i]==1)
			break;
	}
	return i;
}
int main(){
    char str[128];
    while(scanf("%s",str)!=EOF)
	{
		printf("%c",FindChar(str));

    }   return 0;
}