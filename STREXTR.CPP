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
     l=strlen(str);
     cout<<"Enter the string to be extracted\n";
     gets(extstr);
     len=strlen(extstr);
     for(i = 0; i < l-len; i++)
	{
	 k = 0;
	for(j=i;j<i+1;j++)
	 {extstr[k]=str[j];
	  k++;}
	 extstr[k]='\0';
	  cout<<"The required string is :";
	  cout<<extstr;
	  getch();
     }














