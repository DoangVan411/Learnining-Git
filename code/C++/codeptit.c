#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char a[505], b[505], res[505];

void  hieu(char a[], char b[])
{
    memset(res, '0', sizeof(res));
    if(strlen(a)<strlen(b) || strlen(a)==strlen(b) && strcmp(a, b)<0)
    {
        char tmp[505];
        strcpy(tmp, a);
        strcpy(a, b);
        strcpy(b, tmp);
    }
    int i=strlen(a)-1, j=strlen(b)-1;
    int k=0, no=0;
    while(i>=0 || j>=0)
    {
        int tmp=a[i]-'0'-no;
        no=0;
        if(j>=0) tmp-=(b[j]-'0');
        if(tmp<0)
        {
            no=1;
            tmp+=10;
        }
        res[k++]=tmp+'0';
        --i; --j;
    }
    while(res[k]==0) --k;
    for(int d=k; d>=0; --d) printf("%c", res[d]);
    printf("\n");
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        scanf("%s", a);
        scanf("%s", b);
        hieu(a, b);
    }
}
