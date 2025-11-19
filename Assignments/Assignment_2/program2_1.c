#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description :   It is used to print * on Screen
//  Author :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    while(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0; 
}