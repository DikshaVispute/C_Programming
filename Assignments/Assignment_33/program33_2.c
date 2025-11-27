#include<stdio.h>

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description :   It is used to check whether the given albhabet is capital or not
//  Input :         character
//  Output :        int
//  Auther :        Diksha Kadu Vispute
//  Date :          27/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character\n");
    }
    else
    {
        printf("It is not capital character\n");
    }

    return 0;
}