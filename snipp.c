#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char lol[100];
    FILE *fp = fopen("test.txt", "a");
    if (fp == NULL)
    {
        puts("Couldn't open file");
        exit(0);
    }
    else
    {
       do{
        scanf("%s",lol);
        fputs("\n'", fp);
        fputs(lol, fp);
        fputs("':\n", fp);

        memset(lol, 0, sizeof(lol));
        scanf("%s",lol);
        fputs("'prefix': '", fp);
        fputs(lol, fp);
        fputs("'\n", fp);

        memset(lol, 0, sizeof(lol));
        scanf("%s",lol);
        fputs("'body':'", fp);
        fputs(lol, fp);
        fputs("'", fp);
      }while(lol=="done");
        //puts("Done");
        fclose(fp);
    }
    return 0;
}
