#include <stdio.h>
int main()
{

        FILE*fout=fopen("檔案輸出.txt","w+");
        fprintf(fout,"Hellow我在這裡哦\n");
        printf("Hellow World\n");
}
