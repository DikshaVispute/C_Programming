#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   It is used to give difference between summation of factors and non factors of a number 
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          20/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return iSumNonFact - iSumFact;

    /*
    if(iSumFact > iSumNonFact)
    {
        return iSumFact - iSumNonFact;
    }
    else
    {
        return iSumNonFact - iSumFact;
    }
    */
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is : %d ",iRet);

    return 0;
}