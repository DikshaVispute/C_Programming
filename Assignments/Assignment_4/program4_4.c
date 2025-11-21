#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   It is used to give summation of non factors of a number 
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          20/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all nonfactors of %d is : %d ",iValue,iRet);

    return 0;
}