#include <stdio.h>
char line[2000];
int main()
{
	int i=1;
	while(gets(line))
	{
		if(i>1) printf("\n");
		int ans[256]={};
		int max=0;
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
			if(ans[c]>max) max=ans[c];
		}
		for(int f=1;f<=max;f++)
		{
			for(int c=128;c>=32;c--)
			{
				if(ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		i++;
	}
}
