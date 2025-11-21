#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : checkNumType
//  Description :   It is used to check whether the number is positive, negative or zero
//  Input :         Integer
//  Output :        void
//  Auther :        Diksha Kadu Vispute
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumType(int iNo)
{   
    if(iNo > 0)
    {
        printf("The number is positive\n");
    }
    else if(iNo < 0)
    {
        printf("The number is negative\n"); 
    }
    else
    {
        printf("The  number is 0\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the first number :\n");
    scanf("%d",&iValue);

    CheckNumType(iValue);

    return 0;
}