#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to print number on screen in given frequency
//  Author :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////

void Display(int iNo, int iCount)
{
    int iCnt = 0;

    if(iCount < 0)
    {
        iCount = -iCount;
    }

    for(iCnt = 1; iCnt <= iCount; iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue1 = 0, iFrequency = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue1);

    printf("Enter the frequency :\n");
    scanf("%d",&iFrequency);

    Display(iValue1,iFrequency);

    return 0;
}