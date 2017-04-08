#include <stdio.h>
#include <stdlib.h>

void copy(char *c,char *x)
{
        FILE *C,*X;
        C=fopen(c,"r");
        X=fopen(x,"w");
        char i;
        while((i=fgetc(C))!=EOF)
        {
                fputc(i,X);
        }
}

int main()
{
        char a[1000],b[1000];
        printf("Imput a way to a file that copies:");
        gets(a);
        printf("Imput a way to a file where to copy:");
        gets(b);
        copy(a,b);
        printf("Coppying done sucesfully");
        return 0;
 }
