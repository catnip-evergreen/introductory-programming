//longest string
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{char nm[15][15],temp[15];
int i,j,n;
 clrscr();
 cout<<"enter the no. of students";
 cin>>n;
  for(i=0;i<n;i++)
   {cin>>nm[i];
   }

  for(i=0;i<n-1;i++)
   {
   for(j=i+1;j<n;j++)
   {
    if(strlen(nm[i])>strlen(nm[j]))
     { strcpy(temp,nm[i]);
       strcpy(nm[i],nm[j]);
       strcpy(nm[j],temp);
     }
   }
 }

 cout<<'\n'<<"the longest string is  :"<<nm[i]<<"   "<<"the length is :"<<strlen(nm[i]);

   getch();
}
