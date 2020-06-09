#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int i,k,l=0,m=0,len=0;
char str[30];
cout<<"enter string:";
gets(str);
for(i=0;i<strlen(str);i++)
 { k=0;
   while(str[i]!=' '&& str[i]!='\0')

    { k++;
      i++;
    }
   if (k>l)
     {  m=i-k;
	l=k;
     }
 }
 for(i=1;i<=l;i++,m++)
 {
 cout<<str[m];
 }
getch();
}