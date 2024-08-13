#include<stdio.h>
#include<ctype.h>
#include<string.h>

int isvowel(char ch)
{
    ch=toupper(ch);
    return (ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

    int countVowel(char str[] ,int n)
    {
        if (n == 1)
        return isvowel(str[n - 1]);
        return countVowel(str, n-1)+ isvowel(str[n-1]);
            
        }
        int main(){
            //string object
            char str[100]="legacy";

            int len=strlen(str);
            //total numbers of vowel
            printf("the number of vowels :%d",countVowel(str,len));

            return 0;
        
        
    }
