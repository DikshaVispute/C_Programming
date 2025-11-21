#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   It is used to convert case of character
//  Input :         void
//  Output :        Character
//  Auther :        Diksha Kadu Vispute
//  Date :          20/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :\n ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}