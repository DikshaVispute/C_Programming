#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   It is used to calculate difference between Frequency of even numbers and odd numbers
//  Input :         N Integers 
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iFreqEven = 0, iFreqOdd = 0, Difference = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iFreqEven++;
        }
        else
        {
            iFreqOdd++;
        }
    }

    if(iFreqEven > iFreqOdd)
    {
        Difference = iFreqEven - iFreqOdd;
    }
    else
    {
        Difference = iFreqOdd - iFreqEven;
    }

    return Difference;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int*p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate  memory \n");
        return -1;
    }

    printf("Enter %d Elenments \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("Result  is %d ",iRet);

    free(p);

    return 0;
}