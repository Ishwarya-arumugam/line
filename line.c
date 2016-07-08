#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c=0;
char b[100];
clrscr();
gets(b);
n=strlen(b);
for(i=0;i<=n;i++)
{
if(b[i]=='.')
{
c++;
}
}
printf("%d",c);
getch();
}
