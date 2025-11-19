#include<stdio.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It prints 'Hello' if the number is Smaller than 10 otherwise prints 'Demo'
//  Author :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////


void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0; 
}