#include <stdio.h>
#include <string.h>
char line[1000];
int palindrom()
{
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(line[i]!=line[N-1-i]) return 0;
    }
    return 1;
}
int main()
{
    while(scanf("%s",line)==1)
    {
        int p=palindrom();
        if(p==1) printf("%s -- is a regular palindrom.\n\n",line);
        if(p==0) printf("%s -- is not a regular palindrom.\n\n",line);

    }
}
