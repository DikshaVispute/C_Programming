#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapyear
//  Description :   It is used to check leap year
//  Input :         Integer
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iNo)
{   
    if(((iNo % 4) == 0) && ((iNo % 100) != 0) || ((iNo % 400) == 0))
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter the first number :\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return 0;
}