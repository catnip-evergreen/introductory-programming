// PROGRAM TO FIND FREQUENCY OF LETTERS
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
int i,k,n;
char j;
char string[50];
//ENTERING THE STRING
cout<<"Enter string";
gets(string);
//LENGTH OF STRING
n=strlen(string);
//CALCULATING FREQUENCY
for(j='a';j<='z';j++)
    {
    for(i=0,k=0;i<n;i++)
       {
       if(string[i]==j)
	 {
	 k++;
	 }
       }
    //PRINTING THE RESULT
    if(k!=0)
       {
       cout<<"Frequency of "<<j<<" is "<<k<<"\n";
       }
    }
getch();
}

                                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

