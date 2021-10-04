#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int i; 
char keyword(char buf[])
{
    char key[5][10]={"main","void","int","char","return"};
    for(i=0;i<5;i++)
    {
        if(strcmp(key[i],buf)==0)
        {
            return 1;
        }
    }

}
int function(char buf[])
{
    
    n=strlen(buf);
    
    if(i<n)
      return 0;
    else if(buf[i-1]==')'&&buf[i-2]=='(')
      return 1;  
}
void main()
{
    char ch,buf[20];
    char operator[]={"+-*/%^="};
    int j=0;
    FILE *ptr;
    ptr=fopen("input.txt","r");
    while((ch=getc(ptr))!=EOF)
    {
        if(isalpha(ch))
        {
            buf[j]=ch;
            j+=1;
        }
        else if((ch==' '||ch=='\n')&&j!=0)
        {
            buf[j]='\0';
            j=0;
            if(keyword(buf)==1)
                printf("\n%s IS A KEYWORD",buf);
            else if(function(buf)==1) 
                printf("\n%s IS A FUNCTION",buf);
            else
                printf("\n%s IS A IDENTIFIER",buf);           
        }
    }
}
