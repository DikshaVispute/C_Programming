#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check whether the number is even or odd
//  Input :         Integer
//  Output :        Boolean
//  Auther :        Diksha Kadu Vispute
//  Date :          21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }  
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("it is an even number\n");
    }
    else
    {
        printf("it is an odd number\n");
    }

    return 0;
}