#include<stdio.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description :   It is used to check whether the given albhabet is smallcase or not
//  Input :         character
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a smallcase character\n");
    }
    else
    {
        printf("It is not smallcase character\n");
    }

    return 0;
}