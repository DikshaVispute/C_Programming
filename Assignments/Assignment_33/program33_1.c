#include<stdio.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description :   It is used to check whether the given character is alphabet or not
//  Input :         character
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
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
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is an alphabet\n");
    }
    else
    {
        printf("It is not an alphabet\n");
    }

    return 0;
}