#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   It is used to give maximum  of 3 numbers
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{   
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    printf("Enter the third number :\n");
    scanf("%d",&iValue3);

    iRet = FindLargest(iValue1, iValue2, iValue3);

    printf("Maximum number is : %d ",iRet);

    return 0;
}