#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void content(void);
void explain(char *str, char *res, FILE *fp);

#define X 5
#define Y 5

int x=5;
int y=5;

int gotoxy(void)
{
    printf("\033[%d;%df)",y,x);
    fflush(stdout);
}


void content(void)
{
    FILE *fp;
    int sel;
    char str[100];
    char *res=str;

    printf("input chapter number : ");
    scanf("%d", &sel);
    switch(sel)
        case 1:
            fp=fopen("chapter1.txt","r");
            explain(str,res,fp);
}

void explain(char *str,char *res, FILE *fp)
{
    int i=0;

    while(1)
    {
        if(res[0]=='~')
            break;
        gotoxy(X,Y); scanf("%s", str);
        i++;

    }
}
