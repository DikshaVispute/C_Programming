#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description :   It is used to give frequency of a number given by user
//  Input :         Integers 
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0,  iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo )
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int*p = NULL;
    int iRet = 0;

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

    printf("Enter the number whose frequency you want : ");
    scanf("%d",&iValue);

    iRet = Frequency(p,iSize,iValue);

    printf("Frequency of %d is : %d \n",iValue, iRet);

    free(p);

    return 0;
}