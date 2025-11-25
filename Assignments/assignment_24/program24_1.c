#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Description :   It is used to give largest number from all numbers
//  Input :         Integer 
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0,iMax = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *iPtr = NULL;
    int iRet = 0;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    iPtr = (int*)malloc(iSize * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d Elements \n ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Maximum(iPtr, iSize);

    printf("Largest number is : %d\n",iRet);

    free(iPtr);

    return 0;
}
