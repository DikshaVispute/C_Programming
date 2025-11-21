#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description :   It is used to give maximum  of two numbers
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{   
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    iRet = FindMax(iValue1, iValue2);

    printf("Maximum number is : %d ",iRet);

    return 0;
}