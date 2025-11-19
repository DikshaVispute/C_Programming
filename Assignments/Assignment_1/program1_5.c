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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
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