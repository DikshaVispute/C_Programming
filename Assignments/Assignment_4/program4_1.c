#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   It is used to give multiplication of all the factors of a number
//  Input :         Integer
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          20/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    
    for(iCnt = 1, iMult = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors of %d is : %d\n",iValue,iRet);

    return 0;
}