#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int i,v=0;
    char w[50];
    printf("Enter a word: ");
    gets(w);
    for (i=0;w[i]!='\0';i++)
    {
        if(!(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'))
        {
            v++;
        }    
    }

    printf("No of consonant are %d",v);
}