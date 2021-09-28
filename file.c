#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
     FILE *ptr;
    int a=0, b=0, c=0, d=0, e=0;
    char ch;
    char special_char[]="<>,./?'|\"[]{})(*&^%$#@!-_=+)";
    bool isSpecialChar(char ch)
    {
    for(int i=0;i<strlen(special_char);i++)
        if(special_char[i]==ch)
            return true;
    return false;
    }
    ptr=fopen("input.txt","r");
    if(ptr==NULL)
    {
        printf("No file available");
    }
    else
    {
        while((ch=fgetc(ptr))!=EOF)
        {
            if(isalpha(ch))
            { 
                  a=a+1;
            }  
            if(ch == 'a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u')
            {
                    b = b + 1;
                
                if (ch == 'A'|| ch =='E'|| ch =='I'|| ch =='O'|| ch =='U')
                {
                    b = b + 1;
                }
                else
                {
                    c = c + 1;   
                }
            }    
            else if(isdigit(ch))
            {
                 d=d+1;
            } 
            else if(isSpecialChar(ch))
            {
                e=e+1;
            }

          printf("%c", ch);
            
        }
        
        printf("\n");
        printf("%d no of alphabets\n", a);
        
        printf("%d no of vowels\n",b );

        printf("%d no of consonents\n",c );

        printf("%d no of digits\n",d );

        printf("%d no of special symbols\n",e );
        fclose(ptr);
           
    }
}
