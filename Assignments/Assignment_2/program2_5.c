#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to check the number is even or not
//  Input :         Integer
//  Output :        Boolean 
//  Author :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////

bool CheckEven(int iNo)
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

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }

    return 0;
}