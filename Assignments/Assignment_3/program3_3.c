#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactors
//  Description :   It is used to print only even factors of a number
//  Auther :        Diksha Kadu Vispute
//  Date :          17/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue =  0;

    printf("Enter the number :\n ");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}