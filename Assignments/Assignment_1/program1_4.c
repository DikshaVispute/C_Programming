#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   It is used to check whether the number is divisible by 5 or not 
//  Input :         Integer
//  Output :        Boolean
//  Author :        Diksha Kadu Vispute
//  Date :          15/11/2025
//
///////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("The number is divisible by 5\n");
    }
    else
    {
        printf("The number is not divisible by 5\n");
    }
    return 0;
}