#include<stdio.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkDigit
//  Description :   It is used to check whether the given character is digit or not
//  Input :         character
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not digit\n");
    }

    return 0;
}