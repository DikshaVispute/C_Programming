#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Mnimum
//  Description :   It is used to give smallest number from all numbers
//  Input :         Integer 
//  Output :        Integer
//  Auther :        Diksha Kadu Vispute
//  Date :          16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0;

    for(iCnt = 0,iMin = Arr[0]; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(iPtr, iSize);

    printf("Smallest number is : %d\n",iRet);

    free(iPtr);

    return 0;
}
