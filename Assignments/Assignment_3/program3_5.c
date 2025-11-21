#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   It is used to check if a character is vowel or not
//  Auther :        Diksha Kadu Vispute
//  Date :          20/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
        CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }    
}

int main()
{
    char cValue = '\0';
    BOOL bRet =  FALSE;

    printf("Enter character :\n ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a vowel");
    }

    return 0;
}