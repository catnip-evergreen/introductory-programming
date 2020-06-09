#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

//Program to extract a given string and print it
void main()
     {
     clrscr();
     char str[50], extstr[50], tempstr[50];
     int i, j, x, k;
     cout<<"Enter any string\n";
     gets(str);
     cout<<"Enter the string to be extracted\n";
     gets(extstr);
     strcat(str," ");
     for(i = 0; i < strlen(str); i++)
	{
	for(j = i, k = 0; str[j] != ' '; j++, k++)
	   {
	   tempstr[k] = str[j];
	   }
	   cout<<extstr;
	   cout<<'\n'<<tempstr;
	if(strcmp(extstr,tempstr) == 0)
	  {
	  cout<<"The required string is :";
	  puts(tempstr);
	  break;
	  }
	}
     getch();
     }














